//
//  ex1_6.c
//  CICCOPN C
//

#include <stdio.h>

int main()
{
    /* declaração de variáveis */
    int soma=0, i=0;
    
    
    /* ciclo */
    for(i=1; i<=4; i++){
    
        soma+=i;
    
    }
    
    /* mostrar os valores */
    printf("Soma dos primeiros 4 números: %d \n", soma);
    
    return 0;
}
