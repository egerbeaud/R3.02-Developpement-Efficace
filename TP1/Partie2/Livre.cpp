#include "Livre.h"

using namespace std;

Livre::Livre(string titre, string nomAuteur, int anneeParution, int nombrePage)
{
    titre = titre;
    nomAuteur = nomAuteur;
    anneeParution = anneeParution;
    nombrePage = nombrePage;
}


string Livre::getTitre(){
    return titre;
}

string Livre::getNomAuteur(){
    return nomAuteur;
}

int Livre::getAnneeParution(){
    return anneeParution;
}

int Livre::getNombrePage(){
    return nombrePage;
}
