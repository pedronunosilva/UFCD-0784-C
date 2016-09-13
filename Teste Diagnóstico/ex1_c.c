//
//  ex1.c
//  CICCOPN C
//

#include <stdio.h>

int main() {
    
    const double PI = 3.1415;
    
    double raio=0, area = 0, perimetro = 0;
    
    printf("Insira o valor do raio: ");
    scanf("%lf", &raio);
    
    printf("O valor do raio é %lf", raio );
    
    area = PI * raio * raio;
    
    perimetro = 2 * PI * raio;
    
    printf("\nO valor da area é %0.2lf", area );
    
    printf("\nO valor da perimetro é %0.2lf", perimetro );
    
    return 0;
    
}

