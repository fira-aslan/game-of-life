#include "board_clipped.h"

int main(){
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
    board = new_board(board);
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
  return 0;
}
