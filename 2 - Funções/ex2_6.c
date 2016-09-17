//
//  ex2_6.c
//  CICCOPN C
//

#include <stdio.h>

void linha () {
    
    int i=0;
    
    for(i=0; i<=20; i++ ) {
        putchar('*');
    }
    putchar('\n');
}

int main()
{
    int i=0;
    linha();
    printf("Números de 1 a 5 \n");
    linha();
    
    for(i=1; i<=5; i++ ) {
        printf("%d \n", i);
    }
    
    linha();
    
    return 0;
}

