//
//  main.cpp
//  Tetris
//
//  Created by Peter Züger on 26.04.16.
//  Copyright © 2016 Peter Züger. All rights reserved.
//

#include <iostream>
#include <unistd.h>

#include "def_var.h"
#include "screen.h"
#include "blockFall.h"
#include "gamelost.h"
#include "rem_line.h"
#include "Key_inp.h"


int main(){
 /*   screenHW[12][0] = 1;
    screenHW[12][1] = 1;
    screenHW[12][2] = 1;
    screenHW[12][3] = 1;
    screenHW[12][4] = 1;
    screenHW[12][5] = 1;
    screenHW[12][6] = 1;
    screenHW[12][7] = 1;
    screenHW[12][8] = 1;
    screenHW[12][9] = 1;
    screenHW[12][10] = 0;
    screenHW[12][11] = 1;
    screenHW[12][12] = 1;
    screenHW[12][13] = 1;
    screenHW[12][14] = 1;
    screenHW[12][15] = 1;
    screenHW[12][16] = 1;
    screenHW[12][17] = 1;
    screenHW[12][18] = 1;
    screenHW[12][19] = 1;
    screenHW[12][20] = 1;
    
    screenHW[13][10] = 1;
    
    screenHW[10][2] = 1;
    screenHW[9][1] = 1;
    screenHW[9][14] = 1;
    screenHW[10][15] = 1;
    screenHW[10][16] = 1;*/
    
    
    while( !game_lostf() ){
        Block_pos_y = W/2;
        blockFall();
        delay = 1;
        rem_line();
        screen();
    }
    
    return 0;
}