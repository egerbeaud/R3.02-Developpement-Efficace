#include "Mediatheque.h"

#include <iostream>
#include <string>


using namespace std;

Mediatheque::Mediatheque() {
    mediatheque[TAILLE];
    nb_medias = 0 ;
    }


bool Mediatheque::existe(Media* media) {

    for (int i = 0; i < TAILLE; i++){
        if (media[i].getTitre() == media->getTitre()){
            return true;
        }
        else
            {
            return false;
        }
    }

}

void Mediatheque::ajouterMedia(Media* media) {

    if(existe(media)) {
        cout<<"Cet objet existe deja"<<endl;
    }
    else {
        mediatheque[nb_medias] = media;
        nb_medias++;
    }
}


void Mediatheque::supprimerMedia(int index) { 
    if (index < 0 || index >= nb_medias) {
        cout << "L'index est invalide !" << endl;
        return;
    }

    for (int i = index; i < nb_medias - 1; i++) {
        mediatheque[i] = mediatheque[i + 1];
    }

    nb_medias--;
}

void Mediatheque::afficherMediatheque() {
    if(nb_medias == 0) {
        cout << "La médiatheque est vide !" << endl;
    }
    else {
        for (int i = 0; i < nb_medias; i++) {
            cout << mediatheque[i]->getTitre() << endl;
        }
    }
}

void Mediatheque::afficherInfosMedia(Media* media) {
    cout << "Le livre" << media->getTitre()  << " : "<< endl;
    cout << "Créateur : " << media->getCreateur() << endl;
    cout <<  "Année de parution : " << media->getAnneeParution() << endl;
}

// Media Mediatheque::rechercherMedia(string* titre) {
//     for (int i = 0; i < nb_medias; i++) {
//         if (nb_medias[i].getTitre() == titre) {
//             return mediatheque[i];
//         }
//     }
//     cout << "Cet objet n'est pas dans la médiatheque"<< endl;
// }






