/********************************************************************************************
 * This project was developed by Firangiz Aslanova and Humay Abbasli
 ******************************************************************************************/

/**
 * @file main.c
 * @author Firangiz Aslanova and Humay Abbasli
 * @brief "This project was developed for the course Development Techniques. It is a simulation of Game of Life using ansi coding and SDL2 library."
 * @version 1.0
 * @date 2022-06-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include "board.h"

int main(){
  int option;
	printf("Which version do you want to play? \n");
	printf("Enter 1 for clipped, 2 for circular: \n");
	scanf("%d", &option);
  if(option==1 || option==2){
    int height = 60;
    int width = 60;
    int c; bool quit = false;
    Board board;
    init_board(&board, width, height);
    random_board(&board);
    init_SDL(width, height);
    print_SDL(board);
    while(!quit){
      SDL_Event e;
      board = new_board(board, option);
      print_SDL(board);
      print_SDL(board);
      while(SDL_PollEvent(&e)){
        if(e.type == SDL_QUIT){
          quit = true;
        }
      }
    }
    finalize_SDL();
    destroy_board(&board);
  }
  else{
    printf("No such option.\n");
  }
  
  return 0;
}
