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
        Liaison(float poids);
        Liaison(Liaison const& other);

        float getPoids();

        void changerPoids(float nouveau);

    private :

        float m_poids;
};

#endif // DEF_LIAISON
