//
//  ex3_6.c
//  CICCOPN C
//

#include <stdio.h>


int main()
{
    /* declaração de variáveis */
    int vector[]={10,9,8,7,6,5,4,3,2,1}, tamanho = 0;
    
    tamanho = sizeof(vector) / sizeof(int);
    
    printf("O numero de elementos do vector e %d \n", tamanho);
    
    return 0;
}
