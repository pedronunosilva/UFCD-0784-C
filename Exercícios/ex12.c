//
//  ex12.c
//  CICCOPN C
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main( int argc, char *argv[] )
{
    
    /* declaração de variáveis */
    char *str = NULL;
    int i = 0;
    
    
    if(argc < 2) {
        
        printf("Argumentos insuficientes");
        
    } else if (argc == 2) {
        
        printf("Frase: %s \n", argv[1]);
    
    
    } else {
        
        str = (char *) malloc((unsigned int) strlen ( argv[1]) + 1 );
        
        strcpy (str, argv[1]);
    
        for(i = 2; i < argc; i++){
        
            str = (char *) realloc(str, (unsigned int) strlen ( argv[i]) + (unsigned int) strlen (str) + 1);
            
            strcat (str, " ");
            
            strcat (str, argv[i]);
        
        }
        
        printf("%s \n", str);
        printf("%d \n", (unsigned int)strlen(str));
    
    }
    
    return(0);
}


