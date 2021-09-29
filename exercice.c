//
// Created by nathm on 29/09/2021.
//

#include <stdio.h>
#include "mesFonctions.h"
#include "exercice.h"

void exo1() {
    int nombre1=0;
    int nombre2=0;
    printf("Saissisez 2 entier:");
    scanf("%d",&nombre1);
    scanf("%d",&nombre2);
    printf("Le plus grand entier est:%d", getMax( nombre1 , nombre2));
}

void exo3() {
    int largeur = saisirEntier();
    int longueur = saisirEntier();
    printf("L'aire du rectangle est %d et le perimetre est %d", calculAire(longueur,largeur) , calculPerimetre(longueur,largeur));
}
void exo4(){
    int entier = saisirEntier();
    int a = 10;
    if(multiple(entier,3)&& entier>=10){
        printf("l'entier saisit est un multiple de 3 et plus grand que 10");
    }
    else {
        printf("l'entier saisit n'est pas un multiple de 3 ou est plus petit que 10");
    }
}
void exo5(){
    int e1 = saisirEntier();
    int e2 = saisirEntier();
    int e3 = saisirEntier();
    if(moyenne(e1,e2,e3)==-1){
        printf("notes non valide ");
    }
    else{
        printf("la moyenne est %f", moyenne(e1,e2,e3));
    }
}

void exo6(){
    int classe =saisirEntier();
    int eleve = 0;
    int eltot = 0;
    printf("Saissisez le nombre de classe:");
    scanf("%d",&classe);
    while (classe!= 0) {
        printf("Saissisez le nombre d'eleve dans la classe %d:",classe);
        scanf("%d",&eleve);
        eltot = elevetot(eleve, eltot);
    }
    printf("Le nombre d'eleve est :%d", eltot);
}