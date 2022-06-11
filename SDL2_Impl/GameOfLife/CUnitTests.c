#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include <stdlib.h>
#include "board.h"

void test_check_neighbours_clipped(void){
  Board test_board;
  test_board.width=4;
  test_board.height=4;
  test_board.cells = malloc(test_board.height*sizeof(int*));
  for(int i = 0; i < test_board.height; i++){
    test_board.cells[i] = malloc(test_board.width * sizeof(int));
  }

  /*
    The test board is:
    1  0  1  1
    0  0  0  1
    0  1  0  0
    1  1  0  1
  */

  test_board.cells[0][0] = 1;
  test_board.cells[0][1] = 0;
  test_board.cells[0][2] = 1;
  test_board.cells[0][3] = 1;
  test_board.cells[1][0] = 0;
  test_board.cells[1][1] = 0;
  test_board.cells[1][2] = 0;
  test_board.cells[1][3] = 1;
  test_board.cells[2][0] = 0;
  test_board.cells[2][1] = 1;
  test_board.cells[2][2] = 0;
  test_board.cells[2][3] = 0;
  test_board.cells[3][0] = 1;
  test_board.cells[3][1] = 1;
  test_board.cells[3][2] = 0;
  test_board.cells[3][3] = 1;

  CU_ASSERT_EQUAL(check_neighbours_clipped(test_board,2,0),2);
  CU_ASSERT_EQUAL(check_neighbours_clipped(test_board,1,2),2);
  CU_ASSERT_EQUAL(check_neighbours_clipped(test_board,3,3),0);

  for(int i = 0; i < test_board.height; i++){
    free(test_board.cells[i]);
  }
  free(test_board.cells);

}

void test_check_neighbours_circular(void){
  Board test_board;
  test_board.width=4;
  test_board.height=4;
  test_board.cells = malloc(test_board.height*sizeof(int*));
  for(int i = 0; i < test_board.height; i++){
    test_board.cells[i] = malloc(test_board.width * sizeof(int));
  }

  /*
    The test board is:
    1  0  1  1
    0  0  0  1
    0  1  0  0
    1  1  0  1
  */

  test_board.cells[0][0] = 1;
  test_board.cells[0][1] = 0;
  test_board.cells[0][2] = 1;
  test_board.cells[0][3] = 1;
  test_board.cells[1][0] = 0;
  test_board.cells[1][1] = 0;
  test_board.cells[1][2] = 0;
  test_board.cells[1][3] = 1;
  test_board.cells[2][0] = 0;
  test_board.cells[2][1] = 1;
  test_board.cells[2][2] = 0;
  test_board.cells[2][3] = 0;
  test_board.cells[3][0] = 1;
  test_board.cells[3][1] = 1;
  test_board.cells[3][2] = 0;
  test_board.cells[3][3] = 1;

  CU_ASSERT_EQUAL(check_neighbours_circular(test_board,2,0),4);
  CU_ASSERT_EQUAL(check_neighbours_circular(test_board,1,2),2);
  CU_ASSERT_EQUAL(check_neighbours_circular(test_board,0,2),5);

  for(int i = 0; i < test_board.height; i++){
    free(test_board.cells[i]);
  }
  free(test_board.cells);

}


int main (){
  if(CUE_SUCCESS != CU_initialize_registry()){
    return CU_get_error();
  }

  CU_pSuite suite1 = CU_add_suite("Game_tests_1", NULL, NULL);
  CU_pTest t1 = CU_add_test(suite1, "neighbours_check_clipped", test_check_neighbours_clipped);

  CU_pSuite suite2 = CU_add_suite("Game_tests_2", NULL, NULL);
  CU_pTest t2 = CU_add_test(suite1, "neighbours_check_circular", test_check_neighbours_circular);

  if (CU_get_error() != CUE_SUCCESS)
    exit(1);
  CU_basic_run_tests();
  return 0;
}
