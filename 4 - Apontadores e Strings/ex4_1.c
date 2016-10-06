//
//  ex4_1.c
//  CICCOPN C
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* declaração de variáveis */
    int x = 10;
    
    /* mostrar os valores */
    printf("Valor de x: %d, endereco de x: %ld\n", x, (long)&x);
    
    int *p;
    
    p = &x;

    printf("Valor de x: %d, apontador p -> &x e: %ld\n", x, (long)p);
    
    printf("Valor de x: %d, *p referencia o valor %d\n", x, *p);
    
    return 0;
}
