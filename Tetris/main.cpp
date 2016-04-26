//
//  main.cpp
//  Tetris
//
//  Created by Peter Züger on 26.04.16.
//  Copyright © 2016 Peter Züger. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include "screen.h"
#include "def_var.h"

void null_Array(){
    for (i = 0; i < H; i++) {
        for (m = 0; m < W; m++) {
            screenHW[i][m] = 0;
        }
    }
}

int main(){
    null_Array();
    screen();
    
    return 0;
}