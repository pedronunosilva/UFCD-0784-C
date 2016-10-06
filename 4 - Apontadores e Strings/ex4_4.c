//
//  ex4_4.c
//  CICCOPN C
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMMAX 100

/* declaração de funções */
int *VectorAleatorio (int tam);
void imprimirVector (int vector[], int tamanho);

int main()
{
    /* declaração de variáveis */
    int n = 0;
    
    int *vector;
    
    /* Leitura de variáveis */
    printf("Indiquo o numero de valores do vector: ");
    scanf("%d", &n);
    
    vector = VectorAleatorio(n);
    
    
    /* mostrar os valores */
    imprimirVector(vector, n);
    
    free(vector);
    
    return 0;
}


int *VectorAleatorio (int tam) {
    
    int *v, i = 0;
    /* Iniciar gerador aleatório */
    srand( (unsigned int) time(0) );
    
    v = (int*) malloc (sizeof(int) * tam);
    
    for(i = 0; i < tam; i++){
        
        v[i] = 1 + rand() % NUMMAX;
    }

    return v;
}

void imprimirVector (int vector[], int tamanho){

    int i = 0;

    for(i = 0; i < tamanho; i++){

        printf("%d ", vector[i]);
    }
}
