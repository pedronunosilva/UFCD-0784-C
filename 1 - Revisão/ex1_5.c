//
//  ex1_5.c
//  CICCOPN C
//

#include <stdio.h>

int main()
{
    /* declaração de variáveis */
    int soma=0, i=1;
    
    /* ciclo */
    while(i<=4)
    {
        soma+=i;
        i++;
    }
    
    /* mostrar os valores */
    printf("Soma dos primeiros 4 números: %d \n", soma);

    return 0;
}
