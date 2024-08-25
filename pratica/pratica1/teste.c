#include <stdio.h>

int main(void) {

  int n = 1025; 
  char *pchar = (char *)&n;

  printf(" byte 0: %d\n byte 1: %d\n byte 2: %d\n byte 3: %d\n", pchar[0], *(pchar+1), *(pchar+2) = 1, *(pchar+3));
  // *(pchar+1)
  printf("valor n: %d\n", n);

  return 0;
}