#include <string>
#include <iostream>

#include "CD.h"


using namespace std;

    CD::CD(string titre, string nomAuteur, int anneeParution, int duree, int nombreChansons) : AudioVideo(titre, nomAuteur, anneeParution, duree) {
        this->nombreChansons = nombreChansons;
    }

    int CD::getNombreChanson() {
        return this->nombreChansons;
    }

    void CD::setNombreChanson(int new_nombreChansons) {
        nombreChansons = new_nombreChansons;
    }