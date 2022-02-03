#include <stdio.h>
#include <string.h>

int main() {

    char calculation[50];
    int mult = '*';
    char * ptr;

    printf("====================================\n");
    printf("A simple terminal based calculator\n");
    printf("====================================\n");

    printf("Enter your calculation : ");
    scanf("%s", calculation);
    ptr = strchr(calculation, mult);
    if (mult) {
        printf("The multiplication okok");
    }


    return 0;
}