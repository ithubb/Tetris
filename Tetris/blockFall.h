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
#undef RAND_MAX
#define Rand_MAX 7
    Block_pos_x = -1;
    Block_pos_y = W/2 - 2;
    rn = rand();
    rota = (rand() % 2);
    
    
    for (n = 0; ((n < H) && (!collission)); n++) {
        
        mk_move();
        frame_out();
    }
}
/*void blockFall(){
    for(n = 0;  ((n < H) &&(!screenHW[n][Block_pos_y])); n++){
        screenHW[n][Block_pos_y] = 1;
        screenHW[n - 1][Block_pos_y] = 0;
        mk_move();
        frame_out();
    }
}*/

#endif 