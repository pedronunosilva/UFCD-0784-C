//
//  ex2_3.c
//  CICCOPN C
//

#include <stdio.h>

/* declaração de funções */
float media (float x, float y);

int main()
{
    /* declaração de variáveis */
    float x1=0, x2=0;
    
    /* Leitura de variáveis */
    printf("Indique dois valores: ");
    scanf("%f %f", &x1, &x2);
    
    /* mostrar os valores */
    printf("A media é %0.3f \n", media( x1, x2 ) );
    
    return 0;
}


float media (float x, float y) {
    
    return (x + y) / 2;
}
