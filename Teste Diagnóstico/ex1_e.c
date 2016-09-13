//
//  ex1.c
//  CICCOPN C
//

#include <stdio.h>

#define PI 3.1415

double Area (double raio) {

    return  PI * raio * raio;;
}

double Perimetro(double raio) {

    return 2 * PI * raio;
}

int main() {

    
    double raio=0;

    
    printf("Insira o valor do raio: ");
    scanf("%lf", &raio);

    printf("O valor do raio é %lf", raio );

    printf("\nO valor da area é %0.2lf", Area(raio) );

    printf("\nO valor da perimetro é %0.2lf", Perimetro(raio) );

    return 0;

}

