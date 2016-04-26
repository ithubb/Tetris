//
//  screen.h
//  Tetris
//
//  Created by Peter Züger on 26.04.16.
//  Copyright © 2016 Peter Züger. All rights reserved.
//

#ifndef screen_h
#define screen_h
#include <iostream>
#include "def_var.h"
using namespace std;

int screen(){
    
    
    for (i = 0; i < H; i++) {
        for (m = 0; m < W; m++) {
            if ((screenHW[i][m] = 0)) {
                line[m] = ' ';
                
            }else if((screenHW[i][m] = 1)){
                line[m] = '!';
            }
            
            cout << (char) line[m];
        }
        
        cout << endl;
    }
    
    return 0;
}

#endif