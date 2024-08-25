#include <stdio.h>

int main() {
    char string[] = "Exercicio de APC II\n";
    char *ptr = string;
    char *ptr_final = string;

  while(*ptr_final != '\0') {
      ptr_final++;
  }

    int numero_caracteres = ptr_final - ptr;
  printf("O número de caracteres da string é: %d\n", numero_caracteres);

    return 0;
}