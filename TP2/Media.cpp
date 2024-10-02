#include <string>
#include <iostream>
#include "Media.h"

using namespace std;

string Media::get_titre(){
    return titre;
}

string Media::get_createur(){
    return createur;
}
int Media::get_anneeParution(){
    return anneeParution;
}

void Media::set_titre(string new_titre) {
    titre = new_titre;
}

void Media::set_createur(string new_createur) {
    createur = new_createur;
}

void Media::set_anneeParution(int new_anneeParution) {
    anneeParution = new_anneeParution;
}
