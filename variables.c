#include <stdio.h> // Include the primary library for the "printf" fonction

int main() { // the beginning of the code start necessery with "main"


    typedef enum {False, True} bool;

    printf("True or False ?");
    bool myBoolean = True;

    if (myBoolean) {
        printf("Hello");
    }


    int entireNumber;  //creation of the variables
    float decimalNumber = 9.58; //initiation of the variable 
    char character;

    entireNumber = 110; //affect 42 to "entireNumber"
    character = 'b';
 
    printf("Hello World!\n"); // the "/n" jump to the line and print make a text output in terminal
    printf("Un entier => %d \n", entireNumber); // %d for entire num, %f for float (decimal), and %c for char
    printf("Un decimal => %f \n", decimalNumber);
    printf("Un caractere => %c \n", character);
    printf("Le nombre %d a pour caractere %c \n", entireNumber, entireNumber); //%d is in the ascii table number

    return 0; // necessary at the end of all the programms in C 
}