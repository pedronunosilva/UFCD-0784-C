//
//  ex3.c
//  CICCOPN C
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double potencia(int x, int n);

int main()
{
    /* declaração de variáveis */
    int x = 0, n = 0;
    
    
    printf("Insira um valor X e N: ");
    scanf("%d %d", &x, &n);
    
    
    printf("\nFuncao implementada: %0.3f\n", potencia(x, n));
    
    printf("\nFuncao biblioteca math.h: %0.3f\n", pow(x, n));
    
    return 0;
}

double potencia(int x, int n) {
    
    int negativo = 0, i = 0;
    
    double valor = 1;
    
    if(n == 0){
        
        return 1;
        
    } else if(n < 0){
        
        n = abs(n);
        negativo = 1;
    }
    
    for (i = 0; i < n; i++) {
    
        valor = valor * x;
    }
    
    if(negativo == 1) {
        
        return 1 / valor;
        
    } else {
    
        return valor;
    }
    
}
