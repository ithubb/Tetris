//
//  blockFall.h
//  Tetris
//
//  Created by Peter Züger on 28.04.16.
//  Copyright © 2016 Peter Züger. All rights reserved.
//

#ifndef blockFall_h
#define blockFall_h

#include "def_var.h"

void blockFall(){
    for (x = Block_pos_x; x < (Block_pos_x + 4); x++) {
        for (y = Block_pos_y; y < (Block_pos_y + 4); y++) {
            if ((screenHW[x][y] == block[rota][x - Block_pos_x][y - Block_pos_y])
                && screenHW[x][y] == 1)
                coll = 1;
            if (block[rota][x - Block_pos_x][y - Block_pos_y] && (x == (H - 1))) {
                coll = 1;
            }
        }
    }
    if (!coll) {
        copy(&screenHW[0][0], &screenHW[H - 1][W - 1], &screenBuffer[0][0]);
        for (x = Block_pos_x; x < (Block_pos_x + 4); x++) {
            for (y = Block_pos_y; y < (Block_pos_y + 4); y++) {
                screenBuffer[x][y] = block[rota][x - Block_pos_x][y - Block_pos_y];
            }
        }
    }else if(coll){
        for (x = Block_pos_x; x < (Block_pos_x + 4); x++) {
            for (y = Block_pos_y; y < (Block_pos_y + 4); y++) {
                screenHW[x][y] = block[rota][x - Block_pos_x][y - Block_pos_y];
            }
        }
    }
    Block_pos_x++;
}


#endif 