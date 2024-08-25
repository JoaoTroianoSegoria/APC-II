#include <stdio.h>

int main(void) {
  int matriz[3][4] = {{1, 2, 3, 5}, {4, 5, 6, 2}, {7, 8, 9, 3}};
  int *p = &matriz[0][0];

  for (int j = 0; j < 4; j++) {
    for (int i = 0; i < 3; ++) {
      printf("num[%d][%d]: %d\n", i, j, num[i][j]);
    }
  }

  return 0;
}
