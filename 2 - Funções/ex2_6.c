//
//  ex2_6.c
//  CICCOPN C
//

#include <stdio.h>

void linha () {
    
    for(int i=0; i<=20; i++ ) {
        putchar('*');
    }
    putchar('\n');
}

int main()
{
    
    linha();
    printf("Números de 1 a 5 \n");
    linha();
    
    for(int i=1; i<=5; i++ ) {
        printf("%d \n", i);
    }
    
    linha();
    
    return 0;
}

