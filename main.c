#include <stdio.h>
#include <stdbool.h>
int *ptrint;
int choix=5;
/********comparer le choix fait par l'utilisateur à la variable choix par indirection********************/
/*****************************si identique renvoie true si différent renvoie false***********************/
bool choixvaleur(int choixutilisateur);

bool choixvaleur(int choixutilisateur) {

if(choixutilisateur==*ptrint)
{
    return true;
}
else
    return false;

}

bool choixreference(int *choix2utilisateur) {
    if(*choix2utilisateur==*ptrint)
    {
        return true;
    }
    else
        return false;
}

bool choixreference(int* choix2utilisateur);


int main() {
    /**********Déclaration d'un pointeur de type entier ptrint et entier choix=5**********/

    /**********Valoriser ptrint avec l'adresse mémoire de choix***************************/
    ptrint=&choix;
    /**********écrire le code des fonctions**********************************************/
    printf("%p\n",ptrint);
    printf("%p\n",&choix);
    /*********faire le test avec une saisie utilisateur***********************************/
    printf("Veuillez saisir un nombre");
    int choixutilisateur;
    scanf("%d",&choixutilisateur);
    printf("%d\n", choixvaleur(choixutilisateur));
    printf("Veuillez saisir un nombre");
    int choixutilisateur2;
    scanf("%d",&choixutilisateur2);
    printf("%d\n", choixreference(&choixutilisateur2));
    return 0;
}
