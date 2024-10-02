#include "BibliothequeTableau.h"

#include <iostream>
#include <string>


using namespace std;

BibliothequeTableau::BibliothequeTableau() {
    nb_livres = 0;
    livres[TAILLE];
    }


bool BibliothequeTableau::existe(Livre livre) {

    for (int i = 0; i < TAILLE; i++){
        if (livres[i].getTitre() == livre.getTitre()){
            return true;
        }
        else
            {
            return false;
        }
    }

}

void BibliothequeTableau::ajouterLivre(Livre livre) {

    if(existe(livre)) {
        cout<<"Ce livre existe deja"<<endl;
    }
    else {
        livres[nb_livres] = livre;
        nb_livres++;
    }
}


void BibliothequeTableau::supprimerLivre(int index) {
    if (index < 0 || index >= nb_livres) {
        cout << "L'index est invalide !" << endl;
        return;
    }

    for (int i = index; i < nb_livres - 1; i++) {
        livres[i] = livres[i + 1];
    }

    nb_livres--;
}

void BibliothequeTableau::afficherBibliotheque() {
    if(nb_livres == 0) {
        cout << "La bibliotheque est vide !" << endl;
    }
    else {
        for (int i = 0; i < nb_livres; i++) {
            cout << livres[i].getTitre() << endl;
        }
    }
}

void BibliothequeTableau::afficherInfosLivre(Livre livre) {
    cout << "Le livre" << livre.getTitre()  << " : "<< endl;
    cout << "Autheur : " << livre.getNomAuteur() << endl;
    cout <<  "Année de parution : " << livre.getAnneeParution() << endl;
    cout << "Nombre de pages : " << livre.getNombrePage() << endl;
}

Livre BibliothequeTableau::rechercherLivre(string titre) {
    for (int i = 0; i < nb_livres; i++) {
        if (livres[i].getTitre() == titre) {
            return livres[i];
        }
    }
    cout << "Le livre n'est pas dans la bibliothèque"<< endl;
}






