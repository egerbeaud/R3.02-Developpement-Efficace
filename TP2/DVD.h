#ifndef DVD_
#define DVD_

#include <string>
#include <iostream>

#include "AudioVideo.h"

using namespace std;

class DVD : public AudioVideo {


public :
    DVD(string titre, string nomAuteur, int anneeParution, int duree);
};

#endif