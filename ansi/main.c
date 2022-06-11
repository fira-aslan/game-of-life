/********************************************************************************************
 * This project was developed by Firangiz Aslanova and Humay Abbasli
 ******************************************************************************************/

/**
 * @file main.c
 * @author Firangiz Aslanova and Humay Abbasli
 * @brief Main file for ansi coding
 * @version 1.0
 * @date 2022-06-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "board.h"
#include "life.h"


void play(int width, int height, int option)
{
	srand(time(NULL));
	int board[height][width];
	for(int i=0; i<height;i++){
		for(int j=0; j<width; j++){
			board[i][j] = (rand()%2);
		}
	}
	printf("Initial configuration: \n");
	show(board, width, height);
	printf("\n");
	if(option==1){
		for(int i =0; i<2; i++) {
			printf("Next Generation\n");
			generateClipped(board, width, height);
			show(board, width, height);
			printf("\n");
		}
	}else{
		for(int i =0; i<2; i++) {
            printf("Next Generation\n");
			generateCircular(board, width, height);
			show(board, width, height);
			printf("\n");
		}
	}
}


int main()
{
	int option;
	printf("Which version do you want to play? \n");
	printf("Enter 1 for clipped, 2 for circular: \n");
	scanf("%d", &option);
	if(option==1 || option==2){
		int width = 5;
		int height = 5;
		play(width, height, option);
	}else{
		printf("No such option!\n");
	}
}