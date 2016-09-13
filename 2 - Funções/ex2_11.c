//
//  ex2_11.c
//  CICCOPN C
//

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
    
    /* declaração de variáveis */
    int i=0;
    
    /* Iniciar gerador aleatório */
    srand((unsigned int)time(0));
    
    /* Gerar 5 números de 0 a 10 */
    for (i=0; i<=5; i++){
    
        printf ("O número é %d \n", rand() % 10 + 1);

    }
    
    return 0;
}

