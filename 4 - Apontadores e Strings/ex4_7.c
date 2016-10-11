//
//  ex4_7.c
//  CICCOPN C
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /* Declaração de uma variável apontador */
    char *str = "CICCOPN";
    char *str2 = "CICCOPN";

    if( strcmp(str, str2) == 0) {
    
        printf("String e igual\n");
    
    } else {
        
        printf("String e diferente\n");
    }
    
    return(0);
}
