// The board from with help from https://cboard.cprogramming.com/c-programming/172987-c-2d-array-game-board.html
#include <stdio.h>
#define GRID_SIZE 3

int checkMove(char *, int, int);
char *arr[GRID_SIZE][GRID_SIZE];
int inbounds (int y, int x);

int main() {
  for (int a = 0; a < GRID_SIZE; a++) {
    for (int b = 0; b < GRID_SIZE; b++) {
      arr[a][b] = "[*]";
    }
  }
  char *p = "[X]";
  arr[2][2]=p;
  arr[0][2]=p;
  int y=1, x=0;
  arr[y][x] = p;

  for (int a = 0; a < GRID_SIZE; a++) {
    for (int b = 0; b < GRID_SIZE; b++) {
      printf("%s", arr[a][b]);
    }
    printf("\n");
  }
  return 0;
}

int checkMove(char *p, int y, int x) {
    if (arr[(y+1)][(x+1)]&&arr[(y-1)][(x-1)]==p&&inbounds(y+1, x+1)&&inbounds(y-1, x-1)||
        arr[(y+1)][(x-1)]&&arr[(y-1)][(x+1)]==p&&inbounds(y+1, x-1)&&inbounds(y-1, x+1)||
        arr[(y+1)][(x+1)]&&arr[(y+2)][(x+2)]==p&&inbounds(y+1, x+1)&&inbounds(y+2, x+2)||
        arr[(y-1)][(x-1)]&&arr[(y-2)][(x-2)]==p&&inbounds(y-1, x-1)&&inbounds(y-2, x-2)||
        arr[(y-1)][(x+1)]&&arr[(y-2)][(x+2)]==p&&inbounds(y-1, x+1)&&inbounds(y-2, x+2)||
        arr[(y+1)][(x-1)]&&arr[(y+2)][(x-2)]==p&&inbounds(y+1, x-1)&&inbounds(y+2, x-2)||
        arr[(y+1)][x]&&arr[(y-1)][x]==p&&inbounds(y+1, x)&&inbounds(y-1, x)||
        arr[(y+1)][x]&&arr[(y+2)][x]==p&&inbounds(y+1, x)&&inbounds(y+2, x)||
        arr[(y-1)][x]&&arr[(y-2)][x]==p&&inbounds(y-1, x)&&inbounds(y-2, x)||
        arr[y][(x+1)]&&arr[y][((x-1))]==p&&inbounds(y, x+1)&&inbounds(y, x-1)||
        arr[y][(x+1)]&&arr[y][(x+2)]==p&&inbounds(y, x+1)&&inbounds(y, x+2)||
        arr[y][(x-1)]&&arr[y][(x-2)]==p&&inbounds(y, x-1)&&inbounds(y, x-2)) {
        return 1;
    } else {
        return 0;
    }
}
 
int inbounds (int y, int x) {
    return (y >= 0 && y < GRID_SIZE && x >= 0 && x < GRID_SIZE);
}
