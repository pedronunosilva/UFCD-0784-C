//
//  ex2_13.c
//  CICCOPN C
//

#include<stdio.h>

int factorial (int numero) {
    if (numero==0 || numero==1)
    {
        return 1;
    }
    return (numero * factorial (numero - 1) );
}

int main()
{
    /* declaração de variáveis */
    int numero=0;
    
    /* Leitura de variáveis */
    printf("Indique um valor: ");
    scanf("%d", &numero);
    
    if (numero < 0 || numero > 15) {
        
        printf("Erro");
        return 0;
    }
    
    /* mostrar os valores */
    printf("O factorial de %d é %d \n", numero, factorial( numero ) );
}
