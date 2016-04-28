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


int main(){
    
    while(!game_lostf()){
        blockFall();
    }
    
    return 0;
}