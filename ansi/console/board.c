#include "board.h"



void show(void *board, int width, int height)
{
	int (*b)[width] = board;
	for(int i= 0; i<height; i++){
		for(int j= 0; j<width; j++){
         	printf(b[i][j] ? "\033[07m  \e[0m" : "  "); 
		}
        printf("\n");
    }
}