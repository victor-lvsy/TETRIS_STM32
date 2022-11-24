/*
 * function.h
 *
 *  Created on: May 16, 2022
 *      Author: Victor
 */

#ifndef INC_FUNCTION_H_
#define INC_FUNCTION_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <unistd.h>

#define zone_de_jeuX 95
#define zone_de_jeuY 94
#define zone_de_jeu_length 324
#define zone_de_jeu_width 162
#define square_base 16
#define design1 3
#define design2 4
#define design3 5

typedef struct piece{
    struct piece *prev;
    int typepiece; //première case du tableau
    int position; //position de la pièce dans l'espace
    int design; //utilisé pour l'affichage graphique
    struct piece *next;
}PIECE;

typedef struct list{
    PIECE* first;
    PIECE* second;
    PIECE* last;
}LIST;

void init_grid(int grid[14][26]);

void init_pieces(int pieces[7][4][4][2],int tab[224]);

void dispGrid(int grid[14][26]);

void dispPiece(PIECE* toBePlaced,int pieces[7][4][4][2],int grid[14][26],int coord[2]);

int test_hit(PIECE* toBeTested,int pieces[7][4][4][2],int grid[14][26],int coord[2]);

PIECE* create_piece();

LIST* BuildList(PIECE* one, PIECE* two, PIECE* three);

LIST* SwapList(LIST* list);

void fall(PIECE* isPlayed,PIECE* NextPiece,int pieces[7][4][4][2],int grid[14][26],int coord[2],int level);

int testGameOver(int grid[14][26]);

void move_piece(int move,PIECE* isPlayed,int pieces[7][4][4][2],int grid[14][26],int coord[2]);

void delete_line(int grid[14][26],int i);

int test_lines(int grid[14][26],int level);

void core();

void dispNextPiece();

#endif /* INC_FUNCTION_H_ */
