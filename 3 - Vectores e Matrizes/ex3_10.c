//
//  ex3_10.c
//  CICCOPN C
//

#include <stdio.h>


int main()
{
    /* declaração de variáveis */
    int matriz [3][3] = { 1, 2, 3,
                          4, 5, 6,
                          7, 8, 9 };
    
    int l = 0, c = 0;

    /* mostrar os valores */
    
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            
            printf("%d ", matriz[l][c]);
        }
        putchar('\n');
    }

    return 0;
}
