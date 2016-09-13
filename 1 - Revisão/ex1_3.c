//
//  ex1_3.c
//  CICCOPN C
//

#include <stdio.h>

int main()
{
    /* declaração de variáveis */
    char c;
    int x;
    double f;
    
    /* Leitura de variáveis */
    printf("Introduza um caracter: ");
    scanf("%c", &c);
    printf("Introduza um inteiro: ");
    scanf("%d", &x);
    printf("Introduza um real: ");
    scanf("%lf", &f);

    /* mostrar os valores das variáveis */
    printf("c: %c, x: %d f: %lf \n", c, x, f);
    
    return 0;
}
