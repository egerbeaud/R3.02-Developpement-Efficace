#include <string>
#ifndef MEDIA_H
#define MEDIA_H

using namespace std;

class Media
{
private:
    string titre;
    string createur;
    int anneeParution;
    
public:

    string get_titre();
    string get_createur();
    int get_anneeParution();

    void set_titre(string titre);
    void set_createur(string createur);
    void set_anneeParution(int anneeParution);

    virtual void afficherInfosMedia() = 0;
    virtual void creerMedia() = 0;
    
    virtual ~Media() {}

};


#endif