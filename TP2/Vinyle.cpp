#include <string>
#include <iostream>

#include "Vinyle.h"


using namespace std;

    Vinyle::Vinyle(string titre, string nomAuteur, int anneeParution, int duree, int nombreChansons) : AudioVideo(titre, nomAuteur, anneeParution, duree) {
        this->nombreChansons = nombreChansons;
    }


    int Vinyle::getNombreChanson() {
        return this->nombreChansons;
    }

    void Vinyle::setNombreChanson(int new_nombreChansons) {
        nombreChansons = new_nombreChansons;
    }