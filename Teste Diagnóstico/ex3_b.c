//
//  ex3.c
//  CICCOPN C
//

#include <stdio.h>



float IMC (float peso, float altura) {

    return peso / (altura * altura);
}


void Check (float IMC){
    
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


}


int main () {
    
    float peso =0, altura = 0, valor = 0;
    
    printf("Indique o peso em quilogramas: ");
    scanf("%f", &peso);
    
    printf("Indique a altura em metros: ");
    scanf("%f", &altura);
    
    if (peso < 0 || altura < 0) {
        
        printf("Erro valores inferiores a 0");
        return 0;
    }
    
    //valor = IMC (peso, altura);
    
    //Check(valor);
    
    Check( IMC (peso, altura) );
    
    
    return 0;
}