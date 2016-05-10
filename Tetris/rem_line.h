//
//  rem_line.h
//  Tetris
//
//  Created by Peter Züger on 09.05.16.
//  Copyright © 2016 Peter Züger. All rights reserved.
//

#ifndef rem_line_h
#define rem_line_h
#include "def_var.h"

void rem_line(){
    for (q = 0; q < H; q++) {
        for (r = 0; screenHW[q][r] && r < W; r++) {
            if (r == (W -1)) {
                for (s = 0; s < W; s++) {
                    screenHW[q][s] = 0;
                }
                for (t = q; t <= 0; t--) {
                    for (u = 0; u < W; u++) {
                        screenHW[t][u] = screenHW[t-1][u];
                    }
                }
            }
        }
    }
}

#endif
