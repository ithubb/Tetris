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
bool block[4][5][5];            //Temporary moving Object
char line;
unsigned int score = 0;
unsigned char i, m;             //Frame
unsigned char q, r, s, t ,u;    //rem_line
unsigned char o, p;             //gamelost
unsigned char n;                //Key inp
  signed char x, y;
bool coll = 0;
char mv_key;                    //key for Block Movement
int delay = 1;
int Block_pos_x = -1;
int Block_pos_y = W/2-2;
int rn = 0;                     //Random number 0 - 7
int rota = 0;                   //rotation of Blocks
int collission = 0;


/*****************************************************/
//  Function Prototypes                               /
/*****************************************************/
void frame_out();
void blockFall();
int game_lostf();
void rem_line();
int mk_move();
void spawn_block();

#endif