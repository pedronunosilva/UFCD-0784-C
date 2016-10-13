//
//  ex5_5.c
//  CICCOPN C
//

#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
} data;

int main( ) {
    
    /* declaracao de variaveis do tipo Data */
    union Data data;
    
    /* Colocar valores nas variaveis */
    data.i = 10;
    data.f = 220.5;
    strcpy( data.str, "C Programming");
    
    printf( "data.i : %d\n", data.i);
    printf( "data.f : %f\n", data.f);
    printf( "data.str : %s\n", data.str);
    
    printf( "Memoria ocupada pela uniao: %d bytes\n", (int)sizeof(data));
    
    
    return 0;
}

