#include <stdio.h>

int main() {

    int a = 0;
    int b;

    while (a <= 10) {

        printf("a vaut %d\n", a);
        a++;
    }
    
    printf("Boucle while terminée, \n Initialisation de la boucle do ... while \n");

    do
    {
        a--;
        printf("a vaut %d \n", a);
    } while (a > 0);
    
    printf("Initialisation de la boucle for\n");

    for (b = 0; b < 10; b++)  {

        printf("b vaut %d\n", b); 
       
       }

    switch (a) {
        case 0:
        printf("A EST AU MINIMUM (%d)\n", a);
        break;
    
    default:
        printf("Aucune idée de la valeur de a\n");
        break;
    }

    switch (b){
    case 10:
        printf("B EST AU MAXIMUM (%d)\n", b);
        break;
    
    default:
        break;
    }

    return 0;
}