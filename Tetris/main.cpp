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
    
    while( !game_lostf() ){
        screenPos = W/2;
        blockFall();
        delay =1;
        rem_line();
        screen();
    }
    
    return 0;
}