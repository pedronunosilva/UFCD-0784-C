//
//  ex3_7.c
//  CICCOPN C
//

#include <stdio.h>

int main()
{
    /* Alocação de memória para os tipos de dados */

    printf("O tamanho de int e %d bytes\n", (int)sizeof(int));
    printf("O tamanho de float e %d bytes\n\n", (int)sizeof(float));
    
    printf("O tamanho de double e %d bytes\n", (int)sizeof(double));
    printf("O tamanho de long e %d bytes\n\n", (int)sizeof(long));
    
    printf("O tamanho de char e %d bytes\n", (int)sizeof(char));

    return 0;
}
