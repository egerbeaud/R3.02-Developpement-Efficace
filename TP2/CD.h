#ifndef CD_
#define CD_

#include <string>
#include <iostream>

#include "AudioVideo.h"

using namespace std;

class CD : public AudioVideo {

private:
    int nombreChansons;

public :
    CD(string titre, string nomAuteur, int anneeParution, int duree, int nombreChansons);

    int getNombreChanson();
    void setNombreChanson(int nombreChanson);

};

#endif