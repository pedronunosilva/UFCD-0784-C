//
//  ex2_5.c
//  CICCOPN C
//

#include <stdio.h>

int main()
{
    
    /* declaração de variáveis */
    int i;
    
    for(i=0; i<=20; i++ ) {
        putchar('*');
    }
    putchar('\n');
    
    
    printf("Números de 1 a 5 \n");
    
    for(i=0; i<=20; i++ ) {
        putchar('*');
    }
    putchar('\n');
    
    for(i=1; i<=5; i++ ) {
        printf("%d \n", i);
    }
    
    for(i=0; i<=20; i++ ) {
        putchar('*');
    }
    putchar('\n');
    
    return 0;
}

