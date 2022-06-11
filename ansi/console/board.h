/**
 * @file board.h
 * @author Firangiz Aslanova and Humay Abbasli
 * @brief Header file for board functions
 * @version 1.0
 * @date 2022-06-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _BOARD_H_
#define _BOARD_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
 
/**
 * @brief Display a board
 * This function displays a board with live cells denoted by white color and dead cells by empty space
 * @param board 
 * @param width the width of the board
 * @param height the height of the board
 */
void show(void *board, int width, int height);


#endif