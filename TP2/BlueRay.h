#ifndef BLUE_RAY
#define BLUE_RAY

#include <string>
#include <iostream>

#include "AudioVideo.h"

using namespace std;

class BlueRay : public AudioVideo {

private:
    int nombreChansons;

public :
    BlueRay(string titre, string nomAuteur, int anneeParution, int duree);

};

#endif