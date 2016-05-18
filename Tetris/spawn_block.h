//
//  spawn_block.h
//  Tetris
//
//  Created by Peter Züger on 18.05.16.
//  Copyright © 2016 Peter Züger. All rights reserved.
//

#ifndef spawn_block_h
#define spawn_block_h
#include <stdlib.h>
#include "def_var.h"

void spawn_block(){
    rn = rand() % 6;
    switch (rn) {
        case 0:
            copy(&Lshape[0][0][0], &Lshape[3][4][4], &block[0][0][0]);
            break;
        case 1:
            copy(&Jshape[0][0][0], &Jshape[3][4][4], &block[0][0][0]);
            break;
        case 2:
            copy(&Sshape[0][0][0], &Sshape[3][4][4], &block[0][0][0]);
            break;
        case 3:
            copy(&Zshape[0][0][0], &Zshape[3][4][4], &block[0][0][0]);
            break;
        case 4:
            copy(&Ishape[0][0][0], &Ishape[3][4][4], &block[0][0][0]);
            break;
        case 5:
            copy(&Rshape[0][0][0], &Rshape[3][4][4], &block[0][0][0]);
            break;
        case 6:
            copy(&Tshape[0][0][0], &Tshape[3][4][4], &block[0][0][0]);
            break;
    }
}

#endif