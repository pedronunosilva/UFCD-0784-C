//
//  ex5_2.c
//  CICCOPN C
//

#include <stdio.h>
#include <string.h>


struct Livro {
    
    char  titulo[50];
    char  autor[50];
    char  assunto[100];
    int   ISBN;
    
} livro;

void imprimirLivro(struct Livro livro);


int main( ) {
    
    /* declaracao de variaveis do tipo Livro */
    struct Livro livro1;
    struct Livro livro2;
    
    /* adicionar elementos ao livro 1 */
    strcpy( livro1.titulo, "C Programming");
    strcpy( livro1.autor, "K&R");
    strcpy( livro1.assunto, "C Programming Manual");
    livro1.ISBN = 6495407;
    
    /* adicionar elementos ao livro 2 */
    strcpy( livro2.titulo, "C Programming Style");
    strcpy( livro2.autor, "K&R");
    strcpy( livro2.assunto, "C Programming Tuturial");
    livro2.ISBN = 6495402;
    
    /* imprimir elementos do livro 1 */
    imprimirLivro(livro1);
    
    
    /* imprimir elementos do livro 2 */
    imprimirLivro(livro2);
    
    
    return 0;
}


void imprimirLivro(struct Livro livro){


    printf( "Livro - Titulo : %s\n", livro.titulo);
    printf( "Livro - Autor : %s\n", livro.autor);
    printf( "Livro - Assunto : %s\n", livro.assunto);
    printf( "Livro - ISBN : %d\n", livro.ISBN);

}
