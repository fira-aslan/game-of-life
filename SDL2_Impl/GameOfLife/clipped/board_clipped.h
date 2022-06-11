/********************************************************************************************
 * This project was developed by Firangiz Aslanova and Humay Abbasli
 ******************************************************************************************/

/**
 * @file board_clipped.h
 * @brief Header file
 * This file contains necessary function definitions for game of life implementation using SDL2 library
 */



#ifndef _BOARD_H_
#define _BOARD_H_
#include <SDL2/SDL.h>
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * @brief Structure for the board
 * Board has information about cells, its width and height
 */

typedef struct board{
  int **cells; // the cells of the generated board stored in an array
  int height;
  int width;
} Board;

/**
 * @brief Create a random board
 * This function generates a random board
 * @param board 
 */
void random_board(Board *board);


/**
 * @brief Check neighbors
 * This function checks neighbors of each cell using the method clipped
 * @param board 
 * @param x the x coordinate of a cell
 * @param y the y coordinate of a cell
 * @return int 
 */
int check_neighbours(Board board, int x, int y);


/**
 * @brief Generates a board after applying game rules
 * This function returns a new board after applying the rules of the game on an initial board
 * @param board 
 * @return Board 
 */
Board new_board(Board board);


/**
 * @brief Initialize a board
 * This function initializes a board by allocating memory for each cell of the board
 * @param board 
 * @param width the width of the board
 * @param height the height of the board
 */
void init_board(Board *board, int width, int height);


/**
 * @brief Destroy a board
 * This functions destroys a board by freeing memory allocated for each cell
 * @param board 
 */
void destroy_board(Board *board);


/**
 * @brief Initialize SDL window
 * This function creates an SDL window
 * @param width the width of the screen
 * @param height the height of the screen
 */
void init_SDL(int width, int height);


/**
 * @brief Print SDL
 * This function prints SDL
 * @param board 
 * @return int 
 */
int print_SDL(Board board);


/**
 * @brief Finalize SDL
 * This function destroys window and quits SDL
 */
void finalize_SDL();


#endif
