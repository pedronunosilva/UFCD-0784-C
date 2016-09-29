//
//  ex2.c
//  CICCOPN C
//

#include <stdio.h>

int parabola(int a, int x);

int main()
{
    /* declaração de variáveis */
    int a= 0, incremento = 0, min = 0, max = 0, x = 0;
    
    printf("Insira um valor A: ");
    scanf("%d", &a);
    
    printf("\nInsira um incremeto: ");
    scanf("%d", &incremento);
    
    printf("\nInsira um valor minimo e maximo: ");
    scanf("%d %d", &min, &max);
    
    for (x = min; x <= max; x = x + incremento){
        
        printf("Para X = %3d - Y = %3d \n", x, parabola(a, x));
    }
   
    
    return 0;
}

int parabola(int a, int x) {
    
    return a * (x * x);
}
