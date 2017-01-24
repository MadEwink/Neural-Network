/*
    Neural Network
    liaison.h
        Créé : 10/09/16
        Déclaration de la classe Liaison
*/

#ifndef DEF_LIAISON

#define DEF_LIAISON

#include "neurone.h"

class Liaison
{
    public :

    Liaison();
    Liaison(class Neurone* entree, class Neurone* sortie, float poids);
    Liaison(Liaison const& liaison);

    float getPoids();
    float getGradientPrec();

    void changerPoids(float nouveau);

    private :

    float m_poids;
    float m_gradientPrec;
};

#endif // DEF_LIAISON
