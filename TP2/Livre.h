#ifndef LIVRE_H
#define LIVRE_H



#include <string>;

using namespace std;

class Livre
{
private:
    string titre;
    string nomAuteur;
    int anneeParution;
    int nombrePage;

public:
    Livre(string titre, string nomAuteur, int anneeParution, int nombrePage);

    string getTitre();
    string getNomAuteur();
    int getAnneeParution();
    int getNombrePage();
};

#endif
