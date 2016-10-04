//
//  ex3_11.c
//  CICCOPN C
//

#include <stdio.h>

void imprimirMatriz (int matriz[3][3], int l, int c);

int main()
{
    /* declaração de variáveis */
    int matriz [3][3] = { 1, 2, 3,
                          4, 5, 6,
                          7, 8, 9 };
    
    imprimirMatriz(matriz, 3, 3);

    return 0;
}

void imprimirMatriz (int matriz[3][3], int l, int c){
    
    int i = 0, j = 0;
    /* mostrar os valores */
    
    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            
            printf("%d ", matriz[i][j]);
        }
        putchar('\n');
    }

}
