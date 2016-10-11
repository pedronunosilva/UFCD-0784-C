//
//  ex4_6.c
//  CICCOPN C
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /* Declaração de uma variável apontador */
    char *str = NULL;
    
    /* Alocação de memoria */
    str = (char *) malloc(8);
    strcpy(str, "CICCOPN");
    printf("String = %s,  Address = %d\n", str, (int)str);
    
    /* Realocacao de memoria */
    str = (char *) realloc(str, 11);
    strcat(str, ".pt");
    printf("String = %s,  Address = %d\n", str, (int)str);
    
    /* Remocao da alocacao de memoria */
    free(str);
    
    return(0);
}
