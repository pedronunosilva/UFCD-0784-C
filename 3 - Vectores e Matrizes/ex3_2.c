//
//  ex3_2.c
//  CICCOPN C
//

#include <stdio.h>

void imprimirVector (int vector[]){
    
    int i=0;
    for(i=0;i<=10;i++){
        printf("%d ", vector[i]);
    }
    
}

int main()
{
    /* declaração de variáveis */
    int vector[]= {0,1,2,3,4,5,6,7,8,9,10};
    
    /* mostrar os valores */
    imprimirVector(vector);
    
   
    return 0;
}
