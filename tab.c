#include <stdio.h>

int main() {

    int tab[3] = {18, 32};
    int tab2[3] = {5, 10, 15};
    char chaine[11] = "Hello World";

    int b;
    
    for (b = 0; b < 11; b++)
    {
        printf("%s", chaine[b]);
    }
    
    printf("\n");

    printf("tab[0] vaut %d\n", tab[0]);
    printf("tab[1] vaut %d\n", tab[1]);
    printf("tab[2] vaut %d\n", tab[2]);

    int i;
    for (i = 0; i < 3; i++)
    {
        printf("tab2[%d] vaut %d\n", i, tab2[i]);
    }
    

    return 0;
}