#include <string>
#ifndef MEDIA_H
#define MEDIA_H

using namespace std;

class Media
{
protected:
    string titre;
    string createur;
    int anneeParution;
    
public:
    Media(string titre, string createur, int anneeParution);

    string getTitre();
    string getCreateur();
    int getAnneeParution();
    void setTitre(string new_titre);
    void setCreateur(string new_createur);
    void setAnneParution(int new_anneeParution);

    virtual void afficherInfosMedia() = 0;
    virtual void creerMedia() = 0;
    
    virtual ~Media() {}

};


#endif