#ifndef BIBLIOTHEQUE_INTERFACE_H
#define BIBLIOTHEQUE_INTERFACE_H

#include <string>
#include "Livre.cpp"

class InterfaceBibliotheque{
public:
    virtual void ajouterLivre(const Livre livre) = 0;
    virtual void supprimerLivre(const std::string titre) = 0;
    virtual Livre rechercherLivre(const std::string titre) = 0;
    virtual void afficherBibliotheque() = 0;
};

#endif