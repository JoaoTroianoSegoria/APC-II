#include <stdio.h> 

int main(void) { 

    int numero;
    int *p;
    p = &numero;
    
    *p = 5;
    printf("O valor de número é: %d\n", *p);  

    return 0; 
} 