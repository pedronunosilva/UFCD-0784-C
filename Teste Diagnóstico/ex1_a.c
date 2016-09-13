//
//  ex1.c
//  CICCOPN C
//

#include <stdio.h>

int main() {
    
    double raio=0, area = 0, perimetro = 0;
    
    printf("Insira o valor do raio: ");
    scanf("%lf", &raio);
    
    printf("O valor do raio é %lf", raio );
    
    area = 3.14 * raio * raio;
    
    perimetro = 2 * 3.14 * raio;
    
    printf("\nO valor da area é %0.2lf", area );
    
    printf("\nO valor da perimetro é %0.2lf", perimetro );
    
    return 0;
    
}

