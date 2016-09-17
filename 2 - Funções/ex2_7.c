//
//  ex2_7.c
//  CICCOPN C
//

#include <stdio.h>

void linha (int num, char c) {
    
    int i=0;
    
    for(i=0; i<=20; i++ ) {
        putchar(c);
    }
    putchar('\n');
}

int main()
{
    int i=0;
    
    linha(20, '-');
    printf("Números de 1 a 5 \n");
    linha(20, '-');
    
    for(i=1; i<=5; i++ ) {
        printf("%d \n", i);
    }
    
    linha(20, '*');
    
    return 0;
}
