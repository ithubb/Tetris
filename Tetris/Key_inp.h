//
//  Key_inp.h
//  Tetris
//
//  Created by Peter Züger on 10.05.16.
//  Copyright © 2016 Peter Züger. All rights reserved.
//

#ifndef Key_inp_h
#define Key_inp_h

#include "def_var.h"

int mk_move(){
    while (io_charavail(0)) {
        
        mv_key = getkey();
        
        switch (mv_key) {
            case 'w':
                screenHW[n][screenPos] = 0;
                screenPos--;
                screenHW[n][screenPos] = 1;
                delay = 0;
                screen();
                delay = 1;
                break;
                
            case 'e':
                screenHW[n][screenPos] = 0;
                screenPos++;
                screenHW[n][screenPos] = 1;
                delay = 0;
                screen();
                delay = 1;
                break;
                
            case 'r':
                if (rota < 4) {
                    rota++;
                }else if(rota == 4){
                    rota = 0;
                }
                break;
                
            case 't':
                mv_key = 0;
                delay = 0;
                return 0;
                break;
                
                    }
    }
    return 0;
}

#endif