//
//  ex6.c
//  CICCOPN C
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 1
#define MAX 10
#define MAXTENTATIVAS 5


int gerar(int min, int max);
void verificar(int ngerado, int valor);

int SEED = 1024;

int main()
{
    /* declaração de variáveis */
    int num = 0, ngerado = 0, tentativa = 0;
    
    ngerado = gerar (MIN, MAX);
    
    do {
        tentativa++;
        printf("Tentativa %d : ", tentativa);
        scanf("%d", &num);
        
        verificar(ngerado, num);
        
    
    } while (tentativa < MAXTENTATIVAS && num != ngerado);
   
    if (tentativa == MAXTENTATIVAS) {
        
        printf("Perdeu\n");
    
    } else {
    
        printf("Acertou na %d tentativa\n", tentativa);
    }
    
    
    return 0;
}

int gerar(int min, int max) {
    
    --SEED;
    /* Iniciar gerador aleatório */
    srand( (unsigned int) time(0) * SEED );
    
    return min + rand() % max;
    
}

void verificar(int ngerado, int valor){

    if(valor < ngerado) {
        
        printf("Valor esta acima\n");
        
    } else if (valor > ngerado){
        
        printf("Valor esta abaixo\n");
        
    }

}
