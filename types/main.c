#include <stdio.h>

int inte(){
    int num1 = 0xA;             // hecadecimal 
    int num2 = 2;               // decimal
    
    return num1 + num2;
}

float floate(){
    float num1 = 5.0e10;        // Cientific notation
    float num2 = 4.56;

    return num1 * num2;
}

void voide(){
    return;
}

void main(){


    printf("f <1>: %i;\n", inte());
    printf("f <2>: %f;\n",floate());
    printf("f <3>: ");
    return;
}
    
