#include <stdio.h>

int main(void) {

  int i = 5;
  int *p;
  p = &i;

  printf("&p: %p\n", &p); 
  printf("p (&i - endereço de i): %p\n", *p);
  printf("*p (i - valor de i): %d\n", *p);

  
  *p = 7;
  printf("*p (i - valor de i): %d\n", *p);

  printf("Escolha o valor da variável: \n");
  scanf("%d", p);
  printf("*p (i - valor de i): %d\n", *p);
  
  return 0;
}
