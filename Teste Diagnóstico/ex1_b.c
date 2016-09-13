//
//  ex1.c
//  CICCOPN C
//

#include <stdio.h>

int main() {

    double raio=0;

    printf("Insira o valor do raio: ");
    scanf("%lf", &raio);

    printf("O valor do raio é %lf", raio );

    printf("\nO valor da area é %0.2lf", 3.14 * raio * raio );

    printf("\nO valor da perimetro é %0.2lf", 2 * 3.14 * raio );

    return 0;

}

