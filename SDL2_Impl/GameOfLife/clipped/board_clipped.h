#ifndef _BOARD_H_
#define _BOARD_H_
#include <SDL2/SDL.h>
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct board{
  int **cells; // the cells of the generated board stored in an array
  int height;
  int width;
} Board;


void random_board(Board *board);
int check_neighbours(Board board, int x, int y);
Board new_board(Board board);
void init_board(Board *board, int width, int height);
void destroy_board(Board *board);
void init_SDL(int width, int height);
int print_SDL(Board board);
void finalize_SDL();


#endif
