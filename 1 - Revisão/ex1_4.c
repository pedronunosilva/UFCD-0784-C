//
//  ex1_4.c
//  CICCOPN C
//

#include <stdio.h>

int main()
{
    /* declaração de variáveis */
    int numero;
    
    /* Leitura de variáveis */
    printf("Indique um numero: ");
    scanf("%d",&numero);
    
    /* Estrutura condicional */
    if(numero%2==0)
        printf("par \n");
    else
        printf("impar \n");
    
    return 0;
}
