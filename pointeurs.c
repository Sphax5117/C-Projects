#include <stdio.h>

void swap(int * x, int * y) { /* Récupère les variables grace a leur adressse*/
    int tmp = * x;
    * x = * y; 
    * y = tmp;
}

int main() {

    int a = 10;
    int b = 5;
    int * pa = &a;
    printf("A vaut %d (adresse : %p) \n", a, &a);
    printf("=> %p\n", pa);
    printf("La variable à l'adresse %p vaut %d\n", pa, *pa);

    printf("a = %d || b = %d\n", a, b);
    swap(&a, &b); //donne en parametre L'ADRESSE (0x....) des variables
    printf("Swap...\n");
    printf("a = %d || b = %d\n", a, b);


    return 0;
}