#ifndef MEDIATEQUE_TABLEAU
#define MEDIATEQUE_TABLEAU


#include "Livre.h"
#include "Media.h"

using namespace std;
    const static int TAILLE = 100;
class Mediatheque
{
private:

    Media* mediatheque[TAILLE];
    int nb_medias;

public:
    

    bool existe(Media* media);

    void ajouterMedia(Media* media);
    void supprimerMedia(int index);
    Media rechercherMedia(string* titre);
    void afficherMediatheque();

   static void afficherInfosMedia(Media *media);

};

#endif