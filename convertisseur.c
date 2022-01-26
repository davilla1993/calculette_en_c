#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void addition();
void soustraction();
void multiplication();
void division();
void conversion();

int main() {

division();

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

        printf("Somme totale = %.2f", somme);
    } 
}

void soustraction(){

float nbre1, nbre2, reste;
int choix;

printf("-------------------------------PROGRAMME DE SOUSTRACTION--------------------------------------\n\n");

printf("Saisir le premier nombre : \n");
scanf("%f", &nbre1);

printf("Saisir le deuxieme nombre : \n");
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

            printf("Saisir le nombre %d\n :", i+1);
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

printf("Saisissez le premier nombre : \n");
scanf("%f", &nbre1);

printf("Saisissez le deuxieme nombre : \n");
scanf("%f", &nbre2);

    while(nbre2 == 0){
        printf("ERREUR- Impossible de diviser un nombre par 0 \n");
        
        printf("Pour continuer, taper 1 puis ENTRER | Pour quitter le programme, taper sur une touche et ENTRER\n");
        scanf("%d", &choix);

        if(choix == 1){
            printf("Saisissez le deuxieme nombre : \n");
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
    
}