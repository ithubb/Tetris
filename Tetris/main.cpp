//
//  main.cpp
//  Tetris
//
//  Created by Peter Züger on 26.04.16.
//  Copyright © 2016 Peter Züger. All rights reserved.
//

#include <iostream>
#include <unistd.h>
#include <termios.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "def_var.h"
#include "Frame.h"
#include "blockFall.h"
#include "gamelost.h"
#include "rem_line.h"
#include "Key_inp.h"


int main(){
    struct termios old_tio, new_tio;
    tcgetattr(STDIN_FILENO,&old_tio);
    new_tio=old_tio;
    new_tio.c_lflag &=(~ICANON & ~ECHO);
    tcsetattr(STDIN_FILENO,TCSANOW,&new_tio);   //Disabel Buffered Input
        //
        //fgetch(stdin)
        //
    
 /*   screenBuffer[12][0] = 1;
    screenBuffer[12][1] = 1;
    screenBuffer[12][2] = 1;
    screenBuffer[12][3] = 1;
    screenBuffer[12][4] = 1;
    screenBuffer[12][5] = 1;
    screenBuffer[12][6] = 1;
    screenBuffer[12][7] = 1;
    screenBuffer[12][8] = 1;
    screenBuffer[12][9] = 1;
    screenBuffer[12][10] = 0;
    screenBuffer[12][11] = 1;
    screenBuffer[12][12] = 1;
    screenBuffer[12][13] = 1;
    screenBuffer[12][14] = 1;
    screenBuffer[12][15] = 1;
    screenBuffer[12][16] = 1;
    screenBuffer[12][17] = 1;
    screenBuffer[12][18] = 1;
    screenBuffer[12][19] = 1;
    screenBuffer[12][20] = 1;
    
    screenBuffer[13][10] = 1;
    
    screenBuffer[10][2] = 1;
    screenBuffer[9][1] = 1;
    screenBuffer[9][14] = 1;
    screenBuffer[10][15] = 1;
    screenBuffer[10][16] = 1;*/
    
    
    while( !game_lostf() ){
        Block_pos_y = W/2;
            //blockFall();
        delay = 1;
        rem_line();
        frame_out();
    }
    
    tcsetattr(STDIN_FILENO,TCSANOW,&old_tio);   //Enable Buffered Input
    return 0;
}