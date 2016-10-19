//
//  ex15.c
//  CICCOPN C
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void cifrar (char *mensagem, int tamanho);
int procurarChar (char c, char *string, int tamanho);


int main( int argc, char *argv[] )
{

    /* declaração de variáveis */
    int i = 0, tamanho = 0;
    
    char *str = NULL;
    

    if(argc < 2) {

        printf("Argumentos insuficientes");

    } else if (argc == 2) {

        printf("Mensagem: %s \n", argv[1]);
        
        tamanho = (unsigned int) strlen ( argv[1]);
        
        cifrar(argv[1], tamanho);


    } else {

        str = (char *) malloc((unsigned int) strlen ( argv[1]) + 1 );

        strcpy (str, argv[1]);

        for(i = 2; i < argc; i++){

            str = (char *) realloc(str, (unsigned int) strlen ( argv[i]) + (unsigned int) strlen (str) + 1);

            strcat (str, " ");

            strcat (str, argv[i]);

        }

        tamanho = (unsigned int) strlen (str);
        
        cifrar(str, tamanho);

    }

    return(0);
}


void cifrar (char *msg, int tamanho){

    /* declaração de variáveis */
    char *input = {" ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    
    char *output ={" NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
    
    char *mensagem = NULL;

    mensagem = (char*) malloc (sizeof(char) * tamanho);
    
    printf("Mensagem original: '%s'\n", msg);

    int posicao = 0, i = 0;
    
    for (i = 0; i <= tamanho; i++){
    
        posicao = procurarChar(msg[i], input, 53);
        
        mensagem[i] = output[posicao];
    }
    
    printf("ROT13 da mensagem: '%s'\n", mensagem);

}

int procurarChar (char c, char *string, int tamanho){

    int pos = 0;


    while (c != string[pos] && string[pos]!='\0' ) {

        pos++;

    }

    return pos;

}

