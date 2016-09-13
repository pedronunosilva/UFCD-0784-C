//
//  ex2_1.c
//  CICCOPN C
//

#include <stdio.h>

int main()
{
    /* declaração de variáveis */
    float x1=0, x2=0, media=0;

    /* Leitura de variáveis */
    printf("Indique dois valores: ");
    scanf("%f %f", &x1, &x2);
    
    media = (x1 + x2) / 2;

    /* mostrar os valores */
    printf("A media é %0.3f \n", media);
    
    return 0;
}
