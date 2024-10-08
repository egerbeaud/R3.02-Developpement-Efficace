#include <string>
#include <iostream>
#include "Media.h"

using namespace std;

Media::Media(string titre, string createur, int anneeParution){
    this->titre = titre;
    this->createur = createur;
    this->anneeParution = anneeParution;
}

string Media::getTitre(){
    return this->titre;
}

string Media::getCreateur(){
    return this->createur;
}
int Media::getAnneeParution(){
    return this->anneeParution;
}

void Media::setTitre(string new_titre) {
    this->titre = new_titre;
}

void Media::setCreateur(string new_createur) {
    this->createur = new_createur;
}

void Media::setAnneParution(int new_anneeParution) {
    this->anneeParution = new_anneeParution;
}
