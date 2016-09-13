//
//  ex2_8.c
//  CICCOPN C
//

#include <stdio.h>


/* declaração de variáveis */

char c; /* Variável Global */

/* declaração de funções */
void codigo () {
    
    printf("O código do caracter é: %d \n", (int)c );
    
}

int main()
{
    
    /* Leitura de variáveis */
    printf("Escreva um caracter: ");
    scanf("%c", &c);
    
    codigo();
    
    return 0;
}

