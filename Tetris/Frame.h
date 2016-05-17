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
#include <unistd.h>
#include "def_var.h"
using namespace std;

void screen(){
    cout << endl;
    for(i = 0;i < H;i++){
        for(m =0;m < W;m++){
                if(screenBuffer[i][m] == 0){
                    line = 35;
                }else if(screenBuffer[i][m] == 1){
                    line = 32;
                }
            cout <<(char) line;
        }
        cout << endl;
    }
    sleep(delay);
}

#endif