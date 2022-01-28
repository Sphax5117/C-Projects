#include <stdio.h>
#define TAILLE_TABLEAU 10


int main() {

    int tab[TAILLE_TABLEAU] = {1, 2, 3};
    int i;
    
    for (i = 0; i < 10; i++)
    {
        printf("tab[%d] = %d\n", i, tab[i]);
    }
    
    printf("Vous etes a la ligne %d\n", __LINE__);
    printf("Dans le fichier %s\n", __FILE__);


    return 0;
}