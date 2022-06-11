#include "board_clipped.h"

SDL_Window* window = NULL;
SDL_Surface* screen = NULL;


void init_board(Board *board, int width, int height){
  board->height = height;
  board->width = width;
  board->cells = malloc(sizeof(int*)*board->height);
  for(int i = 0; i < board->height; i++){
    board->cells[i] = malloc(sizeof(int)*board->width);
  }
}


void destroy_board(Board *board){
  for(int i = 0; i < board->height; i++){
    free(board->cells[i]);
  }
  free(board->cells);
}


int check_neighbours(Board board, int x, int y){
  int count=0;
  for(int i = -1; i <= 1; i++){
    for(int j = -1; j <= 1; j++){
      if(!(y+i<0 || x+j<0 || y+i >= board.height || x+j >= board.width)){
        if(board.cells[y+i][x+j] == 1){
          if(!(i == 0 && j == 0)){
            count++;
          }
        }
      }
    }
  }
  return count;
}


void random_board(Board *board){
  srand(time(NULL));
  for(int i = 0; i < board->height; i++){
    for(int j = 0; j < board->width; j++){
      if(rand()%10 > 6){
        board->cells[i][j] = 1;
      }
      else{
        board->cells[i][j] = 0;
      }
    }
  }
}


Board new_board(Board board){
  Board new;
  init_board(&new, board.width, board.height);
  for(int i = 0; i< board.height; i++){
    for(int j = 0; j < board.width; j++){
      int neighbours = 0;
      neighbours = check_neighbours(board, j, i);
      if(board.cells[i][j] == 1){
        if (neighbours == 2 || neighbours == 3){
          new.cells[i][j] = 1;
        }
        else{
          new.cells[i][j] = 0;
        }
      }
      else{
        if(neighbours == 3){
          new.cells[i][j] = 1;
        }
        else{
          new.cells[i][j] = 0;
        }
      }
    }
  }

  return new;

}


void init_SDL(int width, int height){
  int SCREEN_WIDTH = width*10;
  int SCREEN_HEIGHT = height*10;
  if(SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS ) < 0){
    printf("Couldn't intitialize SDL.\n");
  }
  else{
    window = SDL_CreateWindow("Game of Life", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if(window == NULL){
      printf("SDL_CreateWindow couldn't create windoe.\n");
    }
    else{
      screen = SDL_GetWindowSurface( window );
    }
  }
}


int print_SDL(Board board){
  SDL_FillRect( screen, NULL, SDL_MapRGB(screen->format, 0x00, 0x00, 0x00 ) );
  for (int i = 0; i < board.height; i++){
    for (int j = 0; j < board.width; j++){
      if (board.cells[i][j] == 1){
        SDL_Rect rect = {j*10, i*10, 10, 10};
        SDL_FillRect(screen, &rect, SDL_MapRGB( screen->format, 245, 206, 10));
      }
    }
    printf("\n");
  }
  SDL_UpdateWindowSurface(window);
}


void finalize_SDL(){
  SDL_DestroyWindow(window);
  window = NULL;
  SDL_FreeSurface(screen);
  screen = NULL;
  SDL_Quit();
}
