#include <stdio.h>
#include <stdlib.h>

// Structure joueur et Croupier
struct Joueur
{
    int numeroCarte;
    char formatCarte;
};

// Tableau de cartes
int cartesPiques[13];
int cartesCarreaux[13];
int cartesCoeur[13];
int cartesTrefles[13];

// Fonction de distribution de cartes pour le joueur
int distributionCartesJoueur()
{
    int cartesDistribueJoueur = cartesPiques[5];
    return cartesDistribueJoueur;
}

// Fonction distribution de cartes pour le Croupier
int distributionCartesCroupier()
{
    int cartesDistribueCroupier = cartesCarreaux[0];
    return cartesDistribueCroupier;
}

int main()
{

    // Les variables
    char statutJeu[] = "continuer";
    char resultatJoueur;
    char resultatCroupier;
    char demandeCarteUtilisateur;
    char demandeCarteCroupier;
    char choixUtilisateur;
    char choixCroupier;
    char resultatFinal;
    int cartesDistribueJoueur;
    int cartesDistribueCroupier;
    int carteJoueur;
    int carteCroupier;

    // Initialisation des tableaux de cartes
    int cartesPiques[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int cartesCarreaux[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int cartesCoeur[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int cartesTrefles[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

    // Création du joueur et du croupier
    struct Joueur Joueur;
    struct Joueur Croupier;

    

    while (statutJeu == "continuer")
    {
        joueur.numeroCarte = distributionCartesJoueur();
        Croupier.numeroCarte = distributionCartesCroupier();

        if (Croupier.numeroCarte >= 17 && Croupier.numeroCarte <= 21)
        {
            demandeCarteCroupier = "non";
        }
        else
        {
            demandeCarteCroupier = "oui";
        }

        if (joueur.numeroCarte < 21)
        {
            scanf("%s", &choixUtilisateur);
            demandeCarteUtilisateur = choixUtilisateur;
        }

        resultat = Joueur.numeroCarte - 21;
        resultatCroupier = Croupier.numeroCarte - 212;

        if (resultatJoueur < resultatCroupier)
        {
            resultatFinal "JoueurWIN";

        }
        else{
            resultatFinal = "CroupierWIN";
        }
    }

    return 0;
}
