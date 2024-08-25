#include <stdio.h>

int main() {
  char s[] = "Maria";
  char *ptr = s;

  printf("\n=-=-= Valor 'r' =-=-=\n");
  printf("Usando s[2]: %c\n", s[2]);
  printf("Usando *(ptr + 2): %c\n", *(ptr + 2));

  printf("\n=-=-= Valor '1000' =-=-=\n");
  printf("Usando s: %p\n", s);
  printf("Usando ptr: %p\n", ptr);

  printf("\n=-=-= Valor '1001' =-=-=\n");
  printf("Usando &s[1]: %p\n", &s[1]);
  printf("Usando ptr + 1: %p\n", ptr + 1);

  
  ptr = (char*)5000;
  printf("\n=-=-= Valor '5000' =-=-=\n");
  printf("Usando s[5000]: %p\n", &s[5000]);
  printf("Usando ptr: %p\n", ptr);

  return 0;
 }