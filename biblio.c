#include <stdio.h>
#include <string.h>


typedef  struct {
    char titre[100];
    char auteur[100];
    int annee;
} Livre;

void afficherLivre(Livre livre) {

    printf("==============\n");
    printf("Titre : %s\n", livre.titre);
    printf("Auteur : %s\n", livre.auteur);
    printf("Annee : %d\n", livre.annee);
    printf("==============\n");

}

int main() {

    printf("Ce programe vous permet de créer votre propore bibliothèque ! \n");
    printf("=============================================================\n");

    Livre bibliotheque[100];
    int nbLivres = 0;
    int i;
    int creationMode = 0;
    int quitting = 1;
    

    while (quitting != 0)  {

        if (nbLivres == 0) {
            printf("Vous n'avez pas de livres dans votre bibliothèque\n");
            printf("Souhaitez vous quitter (tout sauf 1 et 0)ou ajouter un livre (1) ?\n");
            scanf("%d", &creationMode);
        } else {
            printf("Vous avez %d livres dans votres bibliotheque\n", nbLivres);
            printf("Souhaitez vous quitter (tout sauf 1 et 0), consulter vos livres (0) ou en ajouter 1 (1) ?\n");
            scanf("%d", &creationMode);
        }


            if (creationMode == 1) {

                printf("Très bien, veuillez renseigner ces champs(L'app n'étant finie, utiliser _ pour les espaces) : \n");
                printf("Titre : ");
                scanf("%s", bibliotheque[i].titre);
                printf("Auteur : ");
                scanf("%s", bibliotheque[i].auteur);
                printf("Annee : ");
                scanf("%d", &bibliotheque[i].annee);
                if (bibliotheque[i].annee < - 3500) {
                    printf("L'écriture n'existait pas à cette époque...\n");
                    printf("===================================================\n");
                    nbLivres--;
                }else if (bibliotheque[i].annee > 2022) {
                    printf("Vous pouvez lire dans le futur ?!\n");
                    printf("===================================================\n");
                    nbLivres--;
                }

                nbLivres++;

            }else if (creationMode == 0) {

                if (nbLivres > 0) {

                    for (i = 0; i < nbLivres; i++) {
                            afficherLivre(bibliotheque[i]);                
                        }
                }else {
                    printf("Vous n'avez auncun livre dans votre bibliotheque !\n");
                }   
            }else {
                quitting = 0;
            }

    }


    return 0;
}