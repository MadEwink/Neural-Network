/*
    Neural Network
    neurone.h
        Cr�� : 10/09/16
        D�claration de la classe Neurone
    Historique des modifications :
        10/09/16    - Ajout des directives de pr�processeur
                    - Ajout de la classe Neurone
        11/09/16    - Ajout de getNbEntrees, getEntree, changeEntree, m_entrees
        15/09/16    - Modification des param�tres de fActivation
                    - D�placement de m_entrees, changeEntree, getEntree dans liaison.h
        16/09/16    - Annulation des d�placements pr�c�dents
                    - Ajout d'une d�claration de Liaison
                    - Ajout de setActive
        28/09/16    - Ajout de ajouteEntree
        29/09/16    - Ajout de m_nbEntrees
        04/10/16    - Modification de fActivation en calcul
                    - Ajout de m_valeur, getValeur, sigmoide
        13/10/16    - Modification de la structure de Neurone (cf main)
                        Variables obsol�tes :
                            m_entrees       (08/12/16)
                            m_nbEntrees     (08/12/16)
                        Fonctions obsol�tes :
                            ajouteEntree    (08/12/16)
                            changeEntree    (08/12/16)
                            enleveEntree    (08/12/16)
                            getNbEntrees    (08/12/16)
                            getEntree       (08/12/16)
                            calcul          (08/12/16)
                                (g�r� par le r�seau)
                        Variables � modifier :
                        Fonctions � modifier :
                        Variables � ajouter :
                        Fonctions � ajouter :
                            Accesseurs
        10/01/17    - Ajout de la classe ListeNeurone
*/

#ifndef DEF_NEURONES

#define DEF_NEURONES

#include <vector>

class Liaison;

class Neurone
{
    public:

    Neurone();
    Neurone(float seuil);
    Neurone(Neurone const& autre);

    bool getActive();
    float getSeuil();
    float getValeur();
    bool getActuel();

    float sigmoide(float x);        // Calcule f(x), avec f une sigmoide, et actualise les attributs
    void setActuel(bool actuel);
    void setActive(bool active);

    void init();
    Neurone copie();

    private:

    bool m_active;                      // 1 si le neurone a �t� activ� lors de la derni�re ex�cution
    float m_seuil;                      // Seuil d'activation du neurone
    float m_valeur;
    bool m_actuel;                      // 1 si le neurone a �t� actualis� � la derni�re ex�cution
};

class ListeNeurone
{
    public:

    Neurone getNeurone(unsigned int i);

    void ajouteNeurone(Neurone nouveau);
    void vider();

    bool getNeuroneActive(unsigned int i);
    float getNeuroneSeuil(unsigned int i);
    float getNeuroneValeur(unsigned int i);
    bool getNeuroneActuel(unsigned int i);

    float getNeuroneSigmoide(unsigned int i, float x);
    void setNeuroneActuel(unsigned int i, bool actuel);
    void setNeuroneActive(unsigned int i, bool active);

    private:

    std::vector<Neurone> m_neurone;
};

#endif // DEF_NEURONES
