//
//  ex5.c
//  CICCOPN C
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado();

int SEED = 1024;

int main()
{
    /* declaração de variáveis */
    int n = 0, i = 0;
    
    
    printf("Insira o numero de lancamentos: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
    
        printf("\nLancamento %d : %d\n", i, dado());
    }
    
    
    
    return 0;
}

int dado() {
    
    --SEED;
    /* Iniciar gerador aleatório */
    srand( (unsigned int) time(0) * SEED );
    
    return 1 + rand() % 6;
}
