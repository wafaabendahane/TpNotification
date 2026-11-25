#include "GestionnaireNotifications.h"

GestionnaireNotifications::GestionnaireNotifications()
{
	compteur = 0;
}

void GestionnaireNotifications::ajouter(Notification* n)
{
    if (compteur < 100)
    {
        notifications[compteur] = n;
        compteur++;
    }
    else
    {
        cout << "Le tableau est plein !" << endl;
    }
}

void GestionnaireNotifications::envoyerToutes()
{
    for (int i = 0; i < compteur; i++)
    {
        notifications[i]->envoyer();
    }
}
