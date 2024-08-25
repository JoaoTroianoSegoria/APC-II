#include <stdio.h>

int main() {
    char string[22] = "Exercicio de APC II\n";
    char letra;
    char *ultima_ocorrencia = NULL;

    printf("Escolha uma letra: ");
    scanf("%c", &letra); 
    
    
      for(char *ptr = string; *ptr != '\0'; ptr++) {
           if(*ptr == letra) { 
               ultima_ocorrencia = ptr;
           } 
         }
    if(ultima_ocorrencia != NULL) { 
          printf("A letra %c foi apresentada nesse endereço %p\n", letra, &ultima_ocorrencia); 
      } else {
        printf("A letra não foi encontrada na String!\n");
      } 
    
     
    
    return 0;
}