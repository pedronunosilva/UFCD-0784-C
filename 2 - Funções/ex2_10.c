//
//  ex2_10.c
//  CICCOPN C
//

#include <stdio.h>

#include "ex2_10_a.h"

int main()
{
    /* declaração de variáveis */
    float x1=0, x2=0;
    
    /* Leitura de variáveis */
    printf("Indique dois valores: ");
    scanf("%f %f", &x1, &x2);
    
    /* mostrar os valores */
    printf("A media é %0.3f \n", Soma( x1, x2 ) );
    
    return 0;
}
