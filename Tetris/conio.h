//
//  conio.h
//  Tetris
//
//  Created by Peter Züger on 10.05.16.
//  Copyright © 2016 Peter Züger. All rights reserved.
//

#ifndef conio_h
#define conio_h

#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/time.h>
#include <termios.h>

#define MKFLAG(which) \
static int io_tio_set_flag_##which(int fd, int val, int on, int *old) \
{ struct termios tio; \
if (tcgetattr(fd,&tio)) return -1; \
if (old) *old=(tio.which & (val)); \
if (on) tio.which |= (val); \
else tio.which &= ~(val); \
if (tcsetattr(fd,TCSADRAIN,&tio)) return -1; \
return 0; \
} \
static int io_tio_get_flag_##which(int fd, int bit, int *value) \
{ struct termios tio; \
if (tcgetattr(fd,&tio)) return -1; \
*value=(tio.which & (bit)); \
return 0; \
}
MKFLAG(c_lflag)


static int
io_charavail(int fd)
{
    fd_set set;
    struct timeval zeit;
    int ret;
    int tty=1;
    int old_ICANON;
    FD_ZERO(&set);
    FD_SET(fd,&set);
    zeit.tv_sec  = 0;
    zeit.tv_usec = 0;
    if (-1==io_tio_set_flag_c_lflag(fd,ICANON,0,&old_ICANON)) {
        if (errno==EINVAL || errno==ENOTTY)
            tty=0;
        else {
            perror("ICANON");
            return -1;
        }
    }
    
    
    while (1) {
        ret=select(fd+1,&set,0,0,&zeit);
        if (ret>=0) break;
        if (errno==EINTR) continue;
        perror("select");
        break;
    }
    if (tty)
        io_tio_set_flag_c_lflag(fd,ICANON,old_ICANON,NULL);
    return ret;
}




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <time.h>

int getkey() {
    int character;
    struct termios orig_term_attr;
    struct termios new_term_attr;
    
    /* set the terminal to raw mode */
    tcgetattr(fileno(stdin), &orig_term_attr);
    memcpy(&new_term_attr, &orig_term_attr, sizeof(struct termios));
    new_term_attr.c_lflag &= ~(ECHO|ICANON);
    new_term_attr.c_cc[VTIME] = 0;
    new_term_attr.c_cc[VMIN] = 0;
    tcsetattr(fileno(stdin), TCSANOW, &new_term_attr);
    
    /* read a character from the stdin stream without blocking */
    /*   returns EOF (-1) if no character is available */
    character = fgetc(stdin);
    
    /* restore the original terminal attributes */
    tcsetattr(fileno(stdin), TCSANOW, &orig_term_attr);
    
    return character;
}

#endif