//
//  ex3_3.c
//  CICCOPN C
//

#include <stdio.h>

void imprimirVector (int vector[]){
    
    int i=0;
    for(i=0;i<=5;i++){
        printf("%d ", vector[i]);
    }
}

int main()
{
    /* declaração de variáveis */
    int vector[5], contador = 1;
    
    do {
        
        printf("Insira o valor %d de 5 ", contador);
        scanf("%d",&vector[contador]);
        contador++;
        putchar('\n');
    
    } while (contador<=5);
    
    /* mostrar os valores */
    imprimirVector(vector);
    
    return 0;
}
