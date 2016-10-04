//
//  ex3_8.c
//  CICCOPN C
//

#include <stdio.h>


void imprimirVector (int vector[], int tamanho);

int main()
{
    /* declaração de variáveis */
    int vector[]={10,9,8,7,6,5,4,3,2,1};
    
    int tamanho = 0;
    
    tamanho = sizeof(vector) / sizeof(int);

    imprimirVector(vector, tamanho);

    return 0;
}


void imprimirVector (int vector[], int tamanho){

    int i = 0;
    
    for(i = 0; i < tamanho; i++){
        
        printf("%d ", vector[i]);
    }
}
