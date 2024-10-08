#include "Livre.h"


using namespace std;

Livre::Livre(string titre, string nomAuteur, int anneeParution, int nombrePage) : Media(titre, nomAuteur, anneeParution)
{
    this->nombrePage = nombrePage;
}


int Livre::getNombrePage(){
    return nombrePage;
}
