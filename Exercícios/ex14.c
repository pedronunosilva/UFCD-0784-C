//
//  ex14.c
//  CICCOPN C
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void cifrar (char *mensagem, int tamanho);
int procurarChar (char c, char *string, int tamanho);


int main()
{

    /* declaração de variáveis */
    int tamanho = 0;

    char *str = "Aula C no CICCOPN";

    tamanho = (unsigned int) strlen (str);

    cifrar(str, tamanho);

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

