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
bool screenBuffer[H][W];        //First Output Buffer
char line;
unsigned char i , m ,n ,o ,p ,q ,r ,s ,t ,u;//counter Variables
char mv_key;                    //key for Block Movement
int delay = 1;
bool Block_Array[5][5];
int Block_pos_x;
int Block_pos_y;
int rn = 0;                     //Random number 0 - 7
int rota = 0;                   //rotation of Blocks
int collission = 0;


/*****************************************************/
//  Function Prototypes                               /
/*****************************************************/
void screen();
void blockFall();
int game_lostf();
void rem_line();
int mk_move();

#endif