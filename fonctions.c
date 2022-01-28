#include <stdio.h>


void printIntro() {
    printf("Ce programe calcule le carré d'un nombre à l'aide des fonctions ! \n");
    printf("------------------------------------------------------------------\n");
    return;
}

int carre(int n) {
    return n * n;
}


int main() {
    int a;

    printIntro();

    printf("Le nombre que vous voulez mettre au carré : ");
    scanf("%d", &a);

    printf("Le carré de %d est %d\n", a, carre(a));


    return 0;

}