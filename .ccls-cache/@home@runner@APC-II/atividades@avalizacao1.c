#include <stdio.h>

int main(void)  {

  int i = 5;
  int *p;
  p = &i;
  printf("&p: %\n", &p);
  printf("p (&i - endereço de i): %p\n", p);
  printf("*p (i -    valor de i): %d\n", *p);

  *p = 7
  
  return 0;
}