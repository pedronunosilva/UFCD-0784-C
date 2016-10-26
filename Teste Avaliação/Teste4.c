//
//  ex4_3.c
//  CICCOPN C
//

#include <stdio.h>
#include <stdlib.h>

/* declaração de funções */
void copiar (int v1[], int v2[], int tam);
void imprimirVector (int vector[], int tamanho);


int main()
{
    /* declaração de variáveis */
    int vector[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vector2[10];
    
    
    int tamanho = 0;
    
    
    tamanho = sizeof(vector) / sizeof(int);
    
    copiar(vector, vector2, tamanho);
    
    imprimirVector(vector, tamanho);
    
    putchar('\n');
    
    imprimirVector(vector2, tamanho);
    
    /* mostrar os valores */
    

    
    return 0;
}


void copiar (int v1[], int v2[], int tam){
    
    int i = 0;
    
    for(i = tam - 1; i >= 0; i--){
        
        v2[tam - i - 1] = v1[i];
    }
}


void imprimirVector (int vector[], int tamanho){

    int i = 0;

    for(i = 0; i < tamanho; i++){

        printf("%2d ", vector[i]);
    }
}
