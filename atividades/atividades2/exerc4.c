#include <stdio.h>

int main() {
  int num[3][4] = {
  {1,  2,  3,  4},
  {5,  6,  7,  8},
  {9, 10, 11, 12},
};

  int *ptr = &num[0][0];
  int total = 3 * 4;
    for (int i = 0; i < total; i++) { 
      if(*(ptr + i) % 2 == 0) {
         *(ptr + i) = 0;
      }
   }

for(int i = 0; i < 3; i++) {
  for(int j = 0; j < 4; j++) { 
    printf("%d ", num[i][j]);
   } 
   printf("\n");
}

return 0;
}