#include <stdio.h>
#include <stdlib.h>

void swap(int * x, int * y) { /* Récupère les variables grace a leur adressse*/
    int tmp = * x;
    * x = * y; 
    * y = tmp;
}

void remplirTableau(int tab[],int size) {
    int i;
    for (i = 0; i < size; i++)
    {
        *(tab + i) = 5 * i;//  tab[i] = 5 * i;
    }
    
}

int main() {

    int a = 10;
    int b = 5;
    int TabEntier[5];
    int taille = 5;
    int i;
    
    for ( i = 0; i < taille; i++)
    {
        printf("tabEntier[%d] = %d \n", i, TabEntier[i]);
        
    }

    printf("\n============\n");
    remplirTableau(TabEntier, taille);    
        
    for ( i = 0; i < taille; i++)
    {
        printf("tabEntier[%d] = %d \n", i, TabEntier[i]);

    }
    



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