#include <string>
#include <iostream>

#include "AudioVideo.h"
#include "Media.h"

using namespace std;

AudioVideo::AudioVideo(string titre, string createur, int anneeParution, int duree) : Media(titre, createur, anneeParution) {
    duree = duree;
}

int AudioVideo::getDuree() {
    return duree;
}

void AudioVideo::setDuree(int newDuree) {
    duree = newDuree;
};
