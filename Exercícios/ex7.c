#include <stdio.h>
#include <math.h>

#include "mat.h"


int main() {

    double num1 = 52, num2 = 38.5;

    int tamanho = 0;

    double vector[]= {10,2,-30,4,50,1,7,8,9,10};

    printf("Soma e: %0.3f \n", soma(num1, num2));

    printf("Subtracao e: %0.3f \n", subtracao(num1, num2));

    printf("Divisao e: %0.3f \n", divisao(num1, num2));

    printf("Multiplicacao e: %0.3f \n", multiplicacao(num1, num2));

    printf("Factorial e: %d \n", factorial(5));

    printf("Potencia e: %0.3f \n", pow(5, 2));

    printf("Quadrado e: %0.3f \n", quadrado(5));

    printf("Dobro e: %0.3f \n", dobro(5));

    tamanho = sizeof(vector) / sizeof(double);

    printf("Maximo e: %0.3f \n", maximo(vector, tamanho));

    printf("Minimo e: %0.3f \n", minimo(vector, tamanho));

    printf("Amplitude e: %0.3f \n",  maximo(vector, tamanho) - minimo(vector, tamanho));

    printf("Amplitude2 e: %0.3f \n",  amplitude(vector, tamanho));

    printf("Somatorio e: %0.3f \n", somatorio(vector, tamanho));

    printf("Media e: %0.3f \n", somatorio(vector, tamanho) / tamanho);

    printf("Media2 e: %0.3f \n", media(vector, tamanho));

    return 0;
}
