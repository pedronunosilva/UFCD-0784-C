//
//  ex3.c
//  CICCOPN C
//

#include <stdio.h>

int main () {
    
    float peso =0, altura = 0, IMC = 0;

    printf("Indique o peso em quilogramas: ");
    scanf("%f", &peso);
    
    printf("Indique a altura em metros: ");
    scanf("%f", &altura);
    
    if (peso < 0 || altura < 0) {
    
        printf("Erro valores inferiores a 0");
        return 0;
    }
    
    IMC = peso / (altura * altura);
    
    printf("\nO seu indice de massa corporal é: %0.2f", IMC);
    
    if (IMC > 0 && IMC <= 18.5) {
        
        printf("\nO seu IMC corresponde a: Abaixo do peso normal");
    
    } else if (IMC > 18.5 && IMC <= 25 ) {
        
        printf("\nO seu IMC corresponde a: Peso normal");
    
    } else if (IMC > 25 && IMC <= 30) {
        
        printf("\nO seu IMC corresponde a: Acima do peso normal");
    
    } else {
        
        printf("\nO seu IMC corresponde a: Obesidade");
    
    }
    
    
    
    return 0;
}