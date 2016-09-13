//
//  ex2_12.c
//  CICCOPN C
//

#include<stdio.h>

int main()
{
    /* declaração de variáveis */
    int numero=0, factorial = 1, i=0;

    /* Leitura de variáveis */
    printf("Indique um valor: ");
    scanf("%d", &numero);
    
    if (numero < 0 || numero > 15) {
    
        printf("Erro");
        return 0;
    }
    
    /* Ciclo de calculo do factorial */
    for(i=numero; i>0; i--)
    {
        factorial = factorial * i;
    }
    
    /* mostrar os valores */
    printf("O factorial de %d é %d \n", numero, factorial );
    
    return 0;
}
