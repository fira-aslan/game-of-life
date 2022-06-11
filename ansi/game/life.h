/**
 * @file life.h
 * @author Firangiz Aslanova and Humay Abbasli
 * @brief Header file for game functions
 * @version 1.0
 * @date 2022-06-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _LIFE_H_
#define _LIFE_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
 
/**
 * @brief Generate a board with clipped method
 * This function creates a board and looks for the neighbors of each cell using clipped method
 * @param board 
 * @param width the width of the board
 * @param height the height of the board
 */
void generateClipped(void *board, int width, int height);


/**
 * @brief Generate a board with circular method
 * This function creates a board and looks for the neighbors of each cell using circular method
 * @param board 
 * @param width the width of the board
 * @param height the heigh of the board
 */
void generateCircular(void *board, int width, int height);

/**
 * @brief Generate and display a board depending on the chosen option
 * This function checks if option is 1 - in that case it plays a game using clipped method
 * option is 2 - in that case it plays a game using circular method
 * @param width the width of the board
 * @param height the height of the board
 * @param option 1 (for clipped) or 2 (for circular)
 */
void play(int width, int height, int option);



#endif