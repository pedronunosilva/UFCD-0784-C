//
//  ex13.c
//  CICCOPN C
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int procurarChar (char c, char *string, int tamanho);

int main( int argc, char *argv[] )
{
    
    /* declaração de variáveis */
    char *str = "Aula C CICCOPN";
    int posicao = 0, tamanho = 0;
    char c;
    
    printf("%s \n", str);
    
    printf("Insira um caracter: ");
    scanf("%c", &c);
    
    tamanho = (unsigned int) strlen(str);
    
    posicao = procurarChar(c, str, tamanho);
    
    if(posicao >= tamanho) {
        
        printf("Caracter nao encontrado\n");
        
    } else {
    
        printf("CHAR %c -> POS %d\n", c, posicao);
    }
    

    return(0);
}

int procurarChar (char c, char *string, int tamanho){

    int pos = 0;
    
    
    while (c != string[pos] && string[pos]!='\0' ) {
    
        pos++;
        
    }
    
    return pos;

}
