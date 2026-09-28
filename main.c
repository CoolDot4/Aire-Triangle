// MON PREMIER PROJET : FAIT PAR COOLDOT4

#include <stdio.h> 

#define VERT    "\033[32m"
#define RESET   "\033[0m"
#define CLR_ROUGE   "\033[31m"

int main (int argc, char *argv[]) 
{
    printf("  _______ _____  _____          _   _  _____ _      ______  _____\n");
    printf(" |__   __|  __ \\|_   _|   /\\   | \\ | |/ ____| |    |  ____|/ ____|\n");
    printf("    | |  | |__) | | |    /  \\  |  \\| | |  __| |    | |__  | (___  \n");
    printf("    | |  |  _  /  | |   / /\\ \\ | . ` | | |_ | |    |  __|  \\___ \\ \n");
    printf("    | |  | | \\ \\ _| |_ / ____ \\| |\\  | |__| | |____| |____ ____) |\n");
    printf("    |_|  |_|  \\_\\_____/_/    \\_\\_| \\_|\\_____|______|______|_____/ \n");
    printf("\n");
    printf("========================================================================\n");
    printf("\n");
    printf( " BIENVENUE ! Souhaitez-vous connaitre l'aire d'un triangle ?\n" );
    printf("\n");
    printf("========================================================================\n");
    printf("\n");
    
    char yes;
        printf("    Y/N : ");
            scanf("%c", &yes); //scanf prend l'imput 
                getchar(); //va derouler la suite car ENTER

                if (yes == 'n' || yes == 'N') { // == egal , != different
                    return 0;
                }

                if (yes != 'y' && yes != 'Y') { //!= different
                    printf("\n");
                    printf("========================================================================\n");
                    printf("\n");
                    printf(CLR_ROUGE "Reponse non-valide.\n" RESET);
                    printf("\n");
                    printf("========================================================================\n");
                    printf("\n");
                    printf("Appuyez sur ENTER pour quitter le programme."); 
                    printf("\n");
                    getchar();
                    return 0;
                }


    printf("\n");
    printf("========================================================================\n");
    printf("\n");

    int base;
        printf(" Indiquez la base de votre triangle : ");
            scanf("%d", &base);
                getchar();

    printf("\n");

    int hauteur;    
        printf(" Indiquez maintenant sa hauteur : ");  
            scanf("%d", &hauteur);
                getchar();

        if (hauteur == 67 && base == 67) {
            return 0;  
        }

        int multiplication = base * hauteur;
        int air = multiplication / 2;

        printf("\n");
        printf("========================================================================\n");

                if (air == 0 || air < 0) {
                    printf("\n");
                    printf(CLR_ROUGE "   Une erreur s'est produite.\n" RESET);
                    printf("\n");
                    printf("========================================================================\n");
                    printf("\n");
                    printf("Appuyez sur ENTER pour quitter le programme."); 
                    printf("\n");
                    getchar();
                    return 0;

                } else {
                    printf("\n");
                    printf(VERT "   L'aire de votre triangle est egale a %d\n" RESET, air);  
                    printf("\n");
                    printf("========================================================================\n");
                    printf("\n");
                    printf("Appuyez sur ENTER pour quitter le programme."); 
                    printf("\n");
                    getchar();
                    return 0;
                }
        
     printf("========================================================================\n");
    printf("\n");

    printf("Appuyez sur ENTER pour quitter le programme."); 
        
    getchar();
    return 0;
}