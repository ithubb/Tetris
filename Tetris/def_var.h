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
char line;
unsigned char i , m ,n ,o ,p;            //counter Variables
unsigned char screenPos = W / 2;


/*****************************************************/
    //  Function Prototypes                               /
/*****************************************************/
void screen();
void blockFall();
int game_lostf();
#endif