#include <stdio.h>

int main() {

    int a = 5;
    
    if (a == 0) {

        printf("a est egal a 0\n");

    } else 
        printf("a n'est pas egal a 0\n");
    
    
    switch (a) {
        case 5:
        printf("a vaut 5\n");
        break;
    
    default:
        printf("Aucune idée de la valeur de a\n");
        break;
    }
}