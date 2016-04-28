//
//  gamelost.h
//  Tetris
//
//  Created by Peter Züger on 28.04.16.
//  Copyright © 2016 Peter Züger. All rights reserved.
//

#ifndef gamelost_h
#define gamelost_h
#include "def_var.h"

int game_lostf(){
    for(o = 0;o < W;o++){
        if(screenHW[0][o]){
            p = 1;;
            o = H;
            cout << "game lost" << endl;
        }else if(!screenHW[0][o]){
            p = 0;
        }
    }
    return p;
}

#endif