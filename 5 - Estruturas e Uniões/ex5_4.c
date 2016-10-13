//
//  ex5_4.c
//  CICCOPN C
//

#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
} data;

int main( ) {

    /* declaracao de variaveis do tipo Data */
    union Data data;
    
    printf( "Memoria ocupada pela uniao: %d bytes\n", (int)sizeof(data));


    return 0;
}

