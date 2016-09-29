//
//  ex1.c
//  CICCOPN C
//

#include <stdio.h>

void tabuada(int num);

int main()
{
    /* declaração de variáveis */
    int num = 0;
    
    printf("Insira um valor de 1 a 9: ");
    scanf("%d", &num);
    
    tabuada(num);
    
    return 0;
}

void tabuada(int num) {

    int i = 0;
    
    for (i = 1; i <= 10; i++){
        printf("%2d * %2d = %2d \n", num, i, num * i);
    }
    
}
