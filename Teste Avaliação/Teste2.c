//
//  Teste2.c
//  CICCOPN C
//

#include <stdio.h>

void imprimirVector (int *vector, int tamanho);

void copiar (int v1[], int v2[], int tam);

void somar (int *v1, int *v2, int *v3, int tamanho);


int main()
{
    /* declaração de variáveis */
    int v1[]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        v2[10],
        v3[10];

    imprimirVector (v1, 10);

    putchar('\n');
    
    copiar(v1, v2, 10);

    imprimirVector (v2, 10);

    somar (v1, v2, v3, 10);

    putchar('\n');

    imprimirVector (v3, 10);


    return 0;

}


void imprimirVector (int *vector, int tamanho){

    int i = 0;

    for(i = 0; i < tamanho; i++){

        printf("%3d ", vector[i]);
    }
}


void copiar (int v1[], int v2[], int tam){

    int i = 0;

    for(i = tam - 1; i >= 0; i--){

        v2[tam - i - 1] = v1[i];
    }
}

void somar (int *v1, int *v2, int *v3, int tamanho){

    int i = 0;

    for(i = 0; i < tamanho; i++){

        v3[i] = v1[i] + v2[i];
    }
}

