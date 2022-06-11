#include "life.h"


void generateClipped(void *board, int width, int height)
{
	int (*b)[width] = board;
	int newBoard[height][width];
	for(int i=0; i<height; i++){
		for(int j=0; j<width; j++){
			int neighbors = 0;
			for (int y1 = i - 1; y1 <= i + 1; y1++)
				for (int x1 = j - 1; x1 <= j + 1; x1++)
					if ((y1>=0 && x1>=0) && (y1<=height-1 && x1<=width-1) && b[(y1 + height) % height][(x1 + width) % width])
					neighbors++;
 
		if (b[i][j]) neighbors--;
		newBoard[i][j] = ((neighbors == 3 && !b[i][j]) || (neighbors == 2 && b[i][j]) || (neighbors == 3 && b[i][j]));
		}
	}
	for(int i=0; i<height; i++){
		for(int j=0; j<width; j++){
			b[i][j] = newBoard[i][j];
		}
	}
}


void generateCircular(void *board, int width, int height)
{
	int (*b)[width] = board;
	int newBoard[height][width];
	for(int i=0; i<height; i++){
		for(int j=0; j<width; j++){
			int neighbors = 0;
			for (int y1 = i - 1; y1 <= i + 1; y1++)
				for (int x1 = j - 1; x1 <= j + 1; x1++)
					if (b[(y1 + height) % height][(x1 + width) % width])
					neighbors++;
 
		if (b[i][j]) neighbors--;
		newBoard[i][j] = ((neighbors == 3 && !b[i][j]) || (neighbors == 2 && b[i][j]) || (neighbors == 3 && b[i][j]));
		}
	}
	for(int i=0; i<height; i++){
		for(int j=0; j<width; j++){
			b[i][j] = newBoard[i][j];
		}
	}
}


