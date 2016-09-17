//
//  ex4.c
//  CICCOPN C
//

#include <stdio.h>

int num1 =0, num2 = 0, maior = 0, menor = 0;


void Troca () {
    
    if (num1 >= num2) {
        maior = num1;
        menor = num2;
    } else {
        maior = num2;
        menor = num1;
    }
    
}

int Somatorio () {
    
    int sumatorio = 0, i=0;
    
    for (i=menor; i<= maior; i++){
        
        sumatorio = sumatorio + i;
    }

    
    return sumatorio;
}


int main () {
    
    
    
    printf("Indique o primeiro valor: ");
    scanf("%d", &num1);
    
    printf("Indique o segundo valor: ");
    scanf("%d", &num2);
    
    Troca();
    
    
    printf ("O sumatorio do intervalo de %d a %d é: %d", menor, maior, Somatorio());
    
    return 0;
}
