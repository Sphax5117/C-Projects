#include <stdio.h>
#include <unistd.h>

void intro() {
    printf("Welcome to your Bank Management programm ! \n");
    printf("This programm is developped by Sphax :)\n");
    printf("===============================================\n");
    return;
}

int main() {

    FILE * fp1 = fopen("user_pass.txt", "a+");
    FILE * fp2 = fopen("money.txt", "a+");
    

    intro();

    char usr[50];
    char pwd[50];
    char usrFile[50];
    int choice;
    int money;
    int addingMoney;
    fprintf(fp2,"%d", 0);  
    fscanf(fp2, "%d", &money);
  

    int c = fgetc(fp1);
    int d;
    fscanf(fp2, "%d", &d);

    if (c == EOF) {
        printf("Actually, you haven't created an account\n");
        printf("You need to create it now by filling this fields : \n");

        printf("Username : ");
        scanf("%s", usr);
        printf("Password : ");
        scanf("%s", pwd);

        fprintf(fp1, "%s", usr);
        choice = 3;
    }else {
        fgets(usrFile, 50, fp1);
        printf("Great, you already have an account named : %s\n", usrFile);
        printf("\n");
        printf("Do you want to see your bank account (0) or delete this account (1) : ");
        scanf("%d", &choice);
        printf("\n");
    }

    if (choice == 1) {
        int verification; 
        printf("Are you sure ? You will lost all your data ! YES(1) or NO(0) : ");
        scanf("%d", &verification);
        if (verification) {
            printf("Deleting...\n");
            remove("user_pass.txt");
            remove("money.txt");
            sleep(2);
            printf("Your account has been deleted !\n");
        }else {
            printf("Goodbye \n");
        }

    }else if (choice == 0) {

        if (d == 0) {
            
            int addingChoice;
            printf("You have no money, do you want to add some ? YES(1) or NO(0) : ");
            scanf("%d", &addingChoice);
            if (addingChoice) {
                printf("How many do you want to add : ");
                scanf("%d", &addingMoney);
                fprintf(fp2, "%d", addingMoney);
                printf("You have now %d ??? \n", money);
            }
        } else {

            printf("You have %d??? on your account\n", money);
        }
        
    }
    
    
    
    
    fclose(fp1);
    fclose(fp2);
    return 0; 
}