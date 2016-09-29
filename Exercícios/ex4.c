//
//  ex4.c
//  CICCOPN C
//

#include <stdio.h>
#include <stdlib.h>

double potencia(int x, int n);

int main()
{
    /* declaração de variáveis */
    int x = 0, n = 0;
    
    
    printf("Insira um valor X e N: ");
    scanf("%d %d", &x, &n);
    
    
    printf("\nFuncao implementada: %0.3f\n", potencia(x, n));

    
    return 0;
}

double potencia(int x, int n) {
    
    if(n == 0){
        
        return 1;
        
    }
    
    return x * (potencia( x, abs(n) - 1 ));
}
