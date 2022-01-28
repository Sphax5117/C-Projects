#include <stdio.h>

int main() {

    char prenom[50];
    int age;
    int poids;

    printf("Quel est votre prenom ?\n");
    scanf("%s", prenom);
    printf("Quel est votre age ?\n");
    scanf("%d", &age);
    printf("Et votre poids ?\n");
    scanf("%d", &poids);

    printf("Vous vous appellez %s, vous avez %d ans et pesez %d kg.\n", prenom, age, poids);
    if (age >= 18) {
        printf("Vous etes majeur !\n");
    }else {
        printf("Vous etes mineur !\n");
    }
    if (poids > 100) {
        printf("Vous etes en surpoids...\n");
    }else{
        printf("Vous n'etes pas en surpoids !\n");
    }

    return 0;
}