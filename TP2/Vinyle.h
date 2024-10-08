#ifndef VINYLE
#define VINYLE

#include <string>
#include <iostream>

#include "AudioVideo.h"

using namespace std;

class Vinyle : public AudioVideo {

private:
    int nombreChansons;

public :
    Vinyle(string titre, string nomAuteur, int anneeParution, int duree, int nombreChansons);

    int getNombreChanson();

    void setNombreChanson(int nombreChanson);

};

#endif