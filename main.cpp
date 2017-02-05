/*
    Neural Network
        Un r�seau de neurones sur le m�me mod�le que "R�seau Neurones liaisons"
    main.cpp
        Cr�� : 09/09/16
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <cstdlib>

#include "reseau.h"

using namespace std;

int main()
{
    vector<unsigned int> nbNeuroneCouche;
    vector<bool> entrees;
    vector<bool> sorties;

    // Je fais tout � la main pour les tests (flemme de d�clarer des incr�ments)
    nbNeuroneCouche.push_back(15);
    nbNeuroneCouche.push_back(8);
    nbNeuroneCouche.push_back(15);

    Reseau res_test(nbNeuroneCouche);

    entrees.push_back(true);
    entrees.push_back(false);
    entrees.push_back(false);
    entrees.push_back(true);
    entrees.push_back(false);
    entrees.push_back(true);
    entrees.push_back(false);
    entrees.push_back(false);
    entrees.push_back(true);
    entrees.push_back(true);
    entrees.push_back(false);
    entrees.push_back(true);
    entrees.push_back(true);
    entrees.push_back(false);
    entrees.push_back(true);

    res_test.setEntrees(entrees);

    sorties = res_test.calculeSorties();

    res_test.afficheNeurones();

    return 0;
}
