//
//  ex3_4.c
//  CICCOPN C
//

#include <stdio.h>

void imprimirVector (int vector[], int tam);
void BubbleSort (int vector[], int tam);

int main()
{
    /* declaração de variáveis */
    int vector[]={10,9,8,7,6,5,4,3,2,1};


    /* mostrar os valores */
    imprimirVector(vector, 10);
    putchar('\n');
    BubbleSort(vector, 10);
    imprimirVector(vector, 10);
    
    return 0;
}

void BubbleSort (int vector[], int tam){
    
    int i = 0, j = 0, aux = 0;
    
    for(i=tam-1; i >= 1; i--)
    {
        for(j=0; j < i ; j++)
        {
            if(vector[j]>vector[j+1])
            {
                aux = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = aux;
            }
        }
    }
}

void imprimirVector (int vector[], int tam){
    
    int i=0;
    for(i=0;i<tam;i++){
        printf("%d ", vector[i]);
    }
}
