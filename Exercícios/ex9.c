//
//  ex9.c
//  CICCOPN C
//

#include <stdio.h>

void imprimirVector (int *vector, int tamanho);


int main()
{
    /* declaração de variáveis */
    int par[20], impar[20];
    int i = 0, valor = 0, num = 0, cont_par = 0, cont_impar = 0;
    
    
    for(i = 0; i < 20; i++) {
        
        printf("Insira um valor: ");
        scanf("%d", &valor);
        
        num = valor % 2;
        
        if (num == 0) {
            
            if(cont_par<20){
                
                par[cont_par] = valor;
                cont_par++;
                
            } else {
                
                printf("O vector par está cheio\n");
            }
            
        } else {
        
            if(cont_impar<20){
                
                impar[cont_impar] = valor;
                cont_impar++;
                
            } else {
                
                printf("O vector impar está cheio\n");
            }
        
        }
        
    
    }
    
    imprimirVector(par, cont_par);
    
    imprimirVector(impar, cont_impar);

    return 0;

}


void imprimirVector (int *vector, int tamanho){

    int i = 0;

    for(i = 0; i < tamanho; i++){

        printf("%d ", vector[i]);
    }
}

