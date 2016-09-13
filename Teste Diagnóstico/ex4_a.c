//
//  ex4.c
//  CICCOPN C
//

#include <stdio.h>

int main () {

    int num1 =0, num2 = 0, sumatorio = 0, maior = 0, menor = 0;
    
    printf("Indique o primeiro valor: ");
    scanf("%d", &num1);
    
    printf("Indique o segundo valor: ");
    scanf("%d", &num2);
    
    if (num1 >= num2) {
        maior = num1;
        menor = num2;
    } else {
        maior = num2;
        menor = num1;
    }

    for (int i=menor; i<= maior; i++){
        
        sumatorio = sumatorio + i;
    }
    
    printf ("O sumatorio do intervalo de %d a %d é: %d", menor, maior, sumatorio);

    return 0;
}