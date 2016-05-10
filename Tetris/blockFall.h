//
//  blockFall.h
//  Tetris
//
//  Created by Peter Züger on 28.04.16.
//  Copyright © 2016 Peter Züger. All rights reserved.
//

#ifndef blockFall_h
#define blockFall_h
#include <stdlib.h>

#include "def_var.h"

void blockFall(){
    for(n = 0;  ((n < H) &&(!screenHW[n][screenPos])); n++){
        screenHW[n][screenPos] = 1;
        screenHW[n - 1][screenPos] = 0;
        mk_move();
        screen();
    }
}

#endif 