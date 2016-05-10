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
#include "conio.h"
#include "Block_struct.h"
 
/*****************************************************/
//  Defining the Array for the Display                /
/*****************************************************/
#define H 25                    //Height of the Playground
#define W 21                    //With of the Playground
bool screenHW[H][W];            //Playground
char line;
unsigned char i , m ,n ,o ,p ,q ,r ,s ,t ,u;//counter Variables
unsigned char screenPos = W / 2;
char mv_key;                    //key for Block Movement
int delay = 1;
int rn = 0;                     //Random number 0 - 7
int rota = 0;                   //rotation of Blocks


/*****************************************************/
//  Function Prototypes                               /
/*****************************************************/
void screen();
void blockFall();
int game_lostf();
void rem_line();
int mk_move();

#endif