//
//  def_var.h
//  Tetris
//
//  Created by Peter Züger on 26.04.16.
//  Copyright © 2016 Peter Züger. All rights reserved.
//

//This File Contains All Variables Used in this Project


#ifndef def_var_h
#define def_var_h

/*****************************************************/
//  Defining the Array for the Display                /
/*****************************************************/
#define H 25                    //Height of the Playground
#define W 21                    //With of the Playground
bool screenHW[H][W];            //Playground
char line[W];
unsigned char i , m;            //counter Variables


/*****************************************************/
    //  Function Prototypes                               /
/*****************************************************/
int screen();
void null_Array();
#endif