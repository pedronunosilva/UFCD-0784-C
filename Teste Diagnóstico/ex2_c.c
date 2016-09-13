//
//  ex2.c
//  CICCOPN C
//

#include <stdio.h>


float X (int a, int b) {


    return (float)(b * 3 - a) / 3;
}

int Y (int a, int b) {

    return b * b * a;
}



int main() {
    
    int a=4, b=2;
    
    printf("O valor de X é %f \n", X (a,b));
    printf("O valor de Y é %d \n", Y (a, b));
    
    return 0;
    
    
}