//
//  Teste1.c
//  CICCOPN C
//

#include <stdio.h>

void imprimirInverso (int *vector, int tamanho);


int main()
{
    /* declaração de variáveis */
    int vector[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int tamanho = 0;
    
    
    tamanho = sizeof(vector) / sizeof(int);
    
    imprimirInverso (vector, tamanho);

    return 0;

}


void imprimirInverso (int *vector, int tamanho){

    int i = 0;

    for(i = tamanho - 1; i >= 0; i--){

        printf("%d ", vector[i]);
    }
}

