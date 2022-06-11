#ifndef _LIFE_H_
#define _LIFE_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
 

void generateClipped(void *board, int width, int height);
void generateCircular(void *board, int width, int height);
void play(int width, int height, int option);

#endif