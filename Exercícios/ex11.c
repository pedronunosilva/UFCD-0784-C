//
//  ex11.c
//  CICCOPN C
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main( int argc, char *argv[] )
{

    /* declaração de variáveis */
    double soma = 0;
    int i = 0;
    
    if(argc < 3) {
    
        printf("Argumentos insuficientes");
        
    } else {
    
        for(i = 0; i < argc; i++) {
        
            if(isdigit(*argv[i])) {
            
                soma = soma + atof(argv[i]);
            
            }
        }
    
        printf("A soma e: %0.3f ", soma);
    
    }
    

    return(0);
}


