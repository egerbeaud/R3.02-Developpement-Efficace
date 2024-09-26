#ifndef BIBLIOTHEQUE_TABLEAU
#define BIBLIOTHEQUE_TABLEAU

#include <string>
#include <iostream>
#include "Livre.h"

using namespace std;

class BibliothequeTableau
{
private:
    const static int TAILLE = 100;
    Livre livres[TAILLE];
    int nb_livres;

public:
    BibliothequeTableau();

    bool existe(Livre livre);

    void ajouterLivre(Livre livre);
    void supprimerLivre(int index);
    Livre rechercherLivre(string titre);
    void afficherBibliotheque();

    void afficherInfosLivre(Livre livre);
};

#endif