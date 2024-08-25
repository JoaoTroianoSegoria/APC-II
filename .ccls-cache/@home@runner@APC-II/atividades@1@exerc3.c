#include <stdio.h>

int main(void) {
    int n1 = 3;
    int n2 = 5;
  //=-=-=-=-=-=[ Antes ]=-=-=-=-=-=
    int *p1;
    int *p2; 
    int temp;
   
    p1 = &n1;
    p2 = &n2;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
  //=-=-=-=-=-=[ Depois ]=-=-=-=-=-=
    printf("n1: %d, n2: %d\n", n1, n2); 
      return 0;
  }