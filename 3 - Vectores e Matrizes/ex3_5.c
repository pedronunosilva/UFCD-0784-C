//
//  ex3_5.c
//  CICCOPN C
//

#include <stdio.h>

void imprimirVector (int vector[], int tam);
void SelectionSort (int vector[], int tam);

int main()
{
    /* declaração de variáveis */
    int vector[]={10,9,8,7,6,5,4,3,2,1};


    /* mostrar os valores */
    imprimirVector(vector, 10);
    putchar('\n');
    SelectionSort(vector, 10);
    imprimirVector(vector, 10);

    return 0;
}

void SelectionSort(int num[], int tam)
{
    int i, j, min, aux;
    for (i = 0; i < (tam-1); i++)
    {
        min = i;
        for (j = (i+1); j < tam; j++) {
            if(num[j] < num[min])
                min = j;
        }
        if (i != min) {
            aux = num[i];
            num[i] = num[min];
            num[min] = aux;
        }
    }
}

void imprimirVector (int vector[], int tam){

    int i=0;
    for(i=0;i<tam;i++){
        printf("%d ", vector[i]);
    }
}
