//
//  ex2_9.c
//  CICCOPN C
//

#include <stdio.h>

/* declaração de funções */
float Soma (float x, float y) {


    return (x + y);
}

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
