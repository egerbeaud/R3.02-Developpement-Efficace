#ifndef AUDIOVIDEO
#define AUDIOVIDEO

#include <string>
#include <iostream>
#include "Media.h"

using namespace std;

class AudioVideo : public Media
{
protected: 
    int duree;

public:
     AudioVideo(string titre, string createur, int anneeParution, int duree);
    int getDuree();

    void setDuree(int newDuree);
};
#endif
