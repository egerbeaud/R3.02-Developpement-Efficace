#ifndef MEDIATEQUE_TABLEAU
#define MEDIATEQUE_TABLEAU


#include "Livre.h"
#include "Media.h"

using namespace std;
    const static int TAILLE = 100;
class Mediatheque
{
private:

    Media* contenu[TAILLE];
    int nb_livres;

public:
    

    bool existe(Livre livre);

    void ajouterLivre(Livre livre);
    void supprimerLivre(int index);
    Livre rechercherLivre(string titre);
    void afficherBibliotheque();

    static void afficherInfosLivre(Livre livre);
};

#endif