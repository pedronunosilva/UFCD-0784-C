//
//  ex4_9.c
//  CICCOPN C
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main( int argc, char *argv[] )
{

    if(argv[1] && isdigit(*argv[1]) ){
        
        if(argv[2] && isdigit(*argv[2]) ){
        
            printf("A soma e %3f\n", atof(argv[1]) + atof(argv[2]));
            
//            printf("A soma e %3d\n", atoi(argv[1]) + atoi(argv[2]));
        
        }
    
        
    } else {
    
        printf("ERRO - falta de valor ou valor e um caracter");
    }
    
    return(0);
}
