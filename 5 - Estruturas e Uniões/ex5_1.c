//
//  ex5_1.c
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
    printf( "Livro 1 - Titulo : %s\n", livro1.titulo);
    printf( "Livro 1 - Autor : %s\n", livro1.autor);
    printf( "Livro 1 - Assunto : %s\n", livro1.assunto);
    printf( "Livro 1 - ISBN : %d\n", livro1.ISBN);

    /* imprimir elementos do livro 2 */
    printf( "Livro 2 - Titulo : %s\n", livro2.titulo);
    printf( "Livro 2 - Autor : %s\n", livro2.autor);
    printf( "Livro 2 - Assunto : %s\n", livro2.assunto);
    printf( "Livro 2 - ISBN : %d\n", livro2.ISBN);
    
    
    return 0;
}
