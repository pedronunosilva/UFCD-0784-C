//
//  ex2_4.c
//  CICCOPN C
//

#include <stdio.h>

/* declaração de funções */
void codigo (char c) {

    printf("O código do caracter é: %d \n", (int)c );

}

int main()
{
    /* declaração de variáveis */
    char c;
    
    /* Leitura de variáveis */
    printf("Escreva um caracter: ");
    scanf("%c", &c);

    codigo(c);
    
    return 0;
}
