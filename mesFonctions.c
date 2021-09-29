//
// Created by nathm on 29/09/2021.
#include <stdio.h>
#include "mesFonctions.h"

int getMax(int nombre1, int nombre2){
    if(nombre1>nombre2) {
        return nombre1;
    }
    else{
        return nombre2;
    }
}

int saisirEntier() {
    int entier = 0;
    printf("Saissisez un entier:");
    scanf("%d", &entier);
    return entier;
}

int calculAire(int longueur,int largeur) {
    return longueur * largeur;
}
int calculPerimetre(int longueur,int largeur) {
     return 2*(longueur+largeur);
}

int multiple(int entier1, int entier2){
    if(entier1%entier2==0){
        return 1;
    }
    else{
        return 2;
    }
}

float moyenne(int e1, int e2, int e3){
    if (e1<0 || e1>20 || e2<0 || e2>20 || e3<0 || e3>20){
        return -1 ;
    }
    else{
        return ((float)e1 +(float)e2 +(float)e3)/3.0f ;
    }
}

int elevetot(int eleve , int eltot){
    return eltot + eleve;
}