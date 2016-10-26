//
//  Teste3.c
//  CICCOPN C
//

#include <stdio.h>
#include <stdlib.h>

/* declaração de funções */
void parImpar (int vector[], int tam);
int soma (int vector[], int tam);
float media (int vector[], int tam);


int main()
{
    /* declaração de variáveis */
    int n = 0, i = 0;

    int *valor;

    /* Leitura de variáveis */
    printf("Indiquo o numero de valores do vector: ");
    scanf("%d", &n);


    valor = (int*) malloc (sizeof(int) * n);

    for(i = 0; i < n; i++){

        printf("Insira um valor: ");
        scanf("%d", &valor[i]);
    }

    /* mostrar os valores */
    
    parImpar(valor, n);

    printf("A soma  e %d \n", soma(valor, n));
    printf("A media e %0.3f \n", media(valor, n));

    return 0;
}

int soma (int vector[], int tam) {
    
    int i = 0, soma = 0;
    
    for(i = 0; i <= tam; i++){
        
        soma = soma + vector[i];
    }
    
    return soma;
}

float media (int vector[], int tam) {


    return (float) soma(vector, tam) / tam;
}


void parImpar (int vector[], int tam){

    int i = 0;
    
    for(i = 0; i < tam; i++){
    
        if(vector[i]%2 == 0){
        
            printf("Valor %d -> par\n", vector[i]);
        
        } else {
        
            printf("Valor %d -> impar\n", vector[i]);
        
        }
    }

}
