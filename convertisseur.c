#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void addition();
void soustraction();
void multiplication();
void division();
void conversion();
void calculette();

int main() {

    calculette();

return 0;

}

void addition(){

int taille;
int choix;
float somme;
float tableau_de_nombres[11];

    printf("----------------------PROGRAMME D'ADDITION----------------------------------------\n\n");

    printf("NB: VOUS NE POUVEZ PAS ADDITIONNER PLUS DE DIX NOMBRES\n");

    printf("Combien de nombre voulez-vous additionner ? \n");
    scanf("%d", &taille);

while(taille > 10) {

    printf("Ce programme n'autorise pas plus de 10 nombres \n");

    printf("Pour continuer, taper 1 puis ENTRER | Pour quitter le programme, taper sur une touche et ENTRER\n");
    scanf("%d", &choix);

    if(choix == 1){
        printf("Combien de nombre voulez-vous additionner ? \n");
        scanf("%d", &taille);
    } else {
        printf("AUREVOIR !!!!!"); 
        exit(0);
    }
}

if(taille <= 10){

        for(int i=0; i<taille; i++){

            printf("Saisir le nombre %d\n :", i+1);
            scanf("%f", &tableau_de_nombres[i]);
        }

        for(int i=0; i<taille; i++){
            somme += tableau_de_nombres[i];
        }

        printf("Somme totale = %.2f \n", somme);
    } 
}

void soustraction(){

float nbre1, nbre2, reste;
int choix;

printf("-------------------------------PROGRAMME DE SOUSTRACTION--------------------------------------\n\n");

printf("Saisir le premier nombre \n : ");
scanf("%f", &nbre1);

printf("Saisir le deuxieme nombre \n : ");
scanf("%f", &nbre2);

reste = nbre1 - nbre2;

printf("Reste = %.2f", reste);
}

void multiplication() {
int taille , choix;
float produit = 1;
float tableau_de_nombres[6];

    printf("-----------------------PROGRAMME DE MULTIPLICATION-------------------------------\n\n");

    printf("NB: VOUS NE POUVEZ PAS MULTIPLIER PLUS DE SIX NOMBRES\n");

    printf("Combien de nombre voulez-vous multiplier ? \n");
    scanf("%d", &taille);

while(taille > 5) {

    printf("Ce programme n'autorise pas plus de 5 nombres \n");

    printf("Pour continuer, taper 1 puis ENTRER | Pour quitter le programme, taper sur une touche et ENTRER\n");
    scanf("%d", &choix);

    if(choix == 1){
        printf("Combien de nombre voulez-vous multiplier ? \n");
        scanf("%d", &taille);
    } else {
        printf("AUREVOIR !!!!!"); 
        exit(0);
    }
}

if(taille <= 5){

        for(int i=0; i<taille; i++){

            printf("Saisir le nombre %d : \n ", i+1);
            scanf("%f", &tableau_de_nombres[i]);
        }

        for(int i=0; i<taille; i++){
            produit *= tableau_de_nombres[i];
        }

        printf("Produit = %.2f", produit);
    } 
}  

void division() {

float nbre1, nbre2, quotient;
int choix;
 
printf("-----------------------PROGRAMME DE DIVISION----------------------------- \n\n");

printf("Saisissez le premier nombre \n : ");
scanf("%f", &nbre1);

printf("Saisissez le deuxieme nombre \n : ");
scanf("%f", &nbre2);

    while(nbre2 == 0){
        printf("ERREUR- Impossible de diviser un nombre par 0 \n");
        
        printf("Pour continuer, taper 1 puis ENTRER | Pour quitter le programme, taper sur une touche et ENTRER\n");
        scanf("%d", &choix);

        if(choix == 1){
            printf("Saisissez le deuxieme nombre \n : ");
            scanf("%f", &nbre2);
        }else{
            printf("AUREVOIR !!!!!"); 
            exit(0);
        }
    }

    if(nbre2 != 0){
        quotient = nbre1 / nbre2;
        printf("Quotient= %.2f", quotient);
    }
}

void conversion() {

int choix;
float montant, resultat;
float tx_cfa_euro = 0.0015;
float tx_euro_cfa = 654.49;
float tx_cfa_dollar = 0.0017;
float tx_dollar_cfa = 580.50;

    printf("--------------BIENVENU DANS LE PROGRAMME DE CONVERSION DE DEVISES--------------\n\n");

    printf("Saisissez le chiffre correspondant a votre choix\n\n");

    printf(" 1-CONVERSION FCFA --> EURO\n 2-CONVERSION EURO --> FCFA \n 3-CONVERSION FCFA --> DOLLAR US\n 4-CONVERSION DOLLAR US--> FCFA \n\n");
    scanf("%d", &choix);

    printf("Saisissez le montant a convertir(uniquement le montant, pas la devise) \n : ");
    scanf("%f", &montant);

    switch(choix){

        case 1:
            resultat = montant * tx_cfa_euro;
            printf("%.2f Fcfa = %.2f Euro\n\n", montant, resultat);
            break;
        case 2:
            resultat = montant * tx_euro_cfa;
            printf("%.2f Euro = %.2f Fcfa\n\n", montant, resultat);
            break;
        case 3:
            resultat = montant * tx_cfa_dollar;
            printf("%.2f Fcfa = %.2f DollarUS\n\n", montant, resultat);
            break;
        case 4:
            resultat = montant * tx_dollar_cfa;
            printf("%.2f DollarUS = %.2f Fcfa\n\n", montant, resultat);
            break;
        default:
            printf("Choix de conersion incorrect - AUREVOIR !!!\n\n\n");
            
    }
}

void calculette(){
    
        int choice;
        char response;

            printf("---------------------------BIENVENU SUR LA CALCULETTE SHADOW-------------------------------------\n\n");
            printf("NB: Pour saisir un nombre decimal, veuillez utiliser un point au lieu de la virgule.\n\n");
            printf("Quelle operation voulez-vous realiser ? Merci de saisir le nombre correspondant a votre choix.\n\n\n");
            printf(" 1-ADDITION \n 2-SOUSTRACTION \n 3-PRODUIT \n 4-DIVISION \n 5-CONVERSION DE DEVISES \n\n");

            scanf("%d", &choice);

            switch(choice) {
            case 1:
                addition();
                break;
            case 2: 
                soustraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                conversion();
                break;

            default:
                printf("ERREUR - Choix incorrect - Merci de reexecuter le programme si vous voulez faire une autre operation. \n\n");
                break;
            }

}