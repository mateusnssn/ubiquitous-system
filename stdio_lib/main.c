#include <stdio.h>
#include <stdlib.h>


void main(){

    char character; 
    char character1 = 'a';
    char character2 = '\n';
    putchar(character1);
    putchar(character2);

    int number1, number2, number3;
    printf("PLease, enter with your three numbers: ");

    // try using the numbers 2147483647 4294967296 0 to see the memory overflow in practice
    scanf("%i %i %i", &number1, &number2, &number3);
    printf("your numbers are %i, %i and %i\n", number1, number2, number3);

    printf("Press any key: ");
    character = getchar();
    printf("The code ASCII of the character %c is %i", character, character);


    system("pause");
}
