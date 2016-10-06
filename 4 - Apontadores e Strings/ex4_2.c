//
//  ex4_2.c
//  CICCOPN C
//

#include <stdio.h>
#include <stdlib.h>
#define MAXVECTOR 100

/* declaração de funções */
float media (int vector[], int tam);

int main()
{
    /* declaração de variáveis */
    int n = 0, i = 0;
    int valor[MAXVECTOR];

    /* Leitura de variáveis */
    printf("Indiquo o numero de valores do vector: ");
    scanf("%d", &n);
    
    
    for(i = 0; i < n; i++){
        
        printf("Insira um valor: ");
        scanf("%d", &valor[i]);
    }

    /* mostrar os valores */
    
    printf("A media e %0.3f", media(valor, n));
    
    return 0;
}




float media (int vector[], int tam) {
    
    int i = 0, soma = 0;
    
    for(i = 0; i <= tam; i++){
        
        soma = soma + vector[i];
    }
    
    return (float)soma / tam;
}
