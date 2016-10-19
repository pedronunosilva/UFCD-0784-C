//
//  ex8.c
//  CICCOPN C
//

#include <stdio.h>

int procura (int numero, int *v, int tamanho);

int main()
{
    /* declaração de variáveis */
    int vector[]= {10,2,30,4,50,1,7,8,9,10};
    
    int posicao = 0, numero = 0, tamanho =0;
    
    
    printf("Valor : ");
    scanf("%d", &numero);
    
    tamanho = sizeof(vector) / sizeof(int);
    
    posicao = procura(numero, vector, tamanho);
    
    if(posicao == -1) {
        
        printf("O numero %d nao existe", numero);
    } else {
        
        printf("O numero %d posicao %d", numero, posicao);
    }
    
    
    return 0;
    
}

int procura (int numero, int *v, int tamanho){
    
    int i = 0;
    
    do{
        i++;
        
    } while( v[i] != numero && i <= tamanho );
    
    if(i > tamanho){
        
        return -1;
        
    } else {
        
        return i;
    }
    
}
