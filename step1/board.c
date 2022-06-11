#include "board.h"

void generateBoard(){
  int size = 10;  //initialize size of the square board
	printf("\033[2J"); //erase entire screen
	printf("\033[?25l"); //hide the cursor
	for(int i= 0; i<size; i++){
		printf("\033[%d;4H",i+2); //move cursor to position (0,0)
		for(int j= 0; j<size; j++){
			int c = (i%2 == j%2) ? 40 : 42; //colors of the board are black and green
			printf("\033[%dm  ",c);
		}
	}
	printf("\033[?25h"); //show the cursor
	
}