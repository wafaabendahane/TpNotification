// TpNotification.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Notification.h"
#include"NotificationEmail.h"
#include"NotificationPush.h"
#include"NotificationSMS.h"
#include "GestionnaireNotifications.h"

int main()
{
	NotificationEmail N1("Securite","wafaabendahane6@gmail.com",  "Nouvelle connexion detecte");
	NotificationSMS N2("0617072697", "Orange", "Votre code est 23456");
	NotificationPush N3("user_1386", "CIHbanck", "paiement confirmer");


	Notification* tab[3];
    tab[0] = &N1;
	tab[1] = &N2;
	tab[2] = &N3;
	cout << "===== NOTIFICATIONS =====" << endl;

	for (int i = 0; i < 3; i++)
	{
		tab[i]->envoyer();

		cout << endl;
	}
	GestionnaireNotifications gestionnaire;
	gestionnaire.ajouter(&N1);
	gestionnaire.ajouter(&N2);
	gestionnaire.ajouter(&N3);
	cout << "===== ENVOI GROUPE =====" << endl;

	gestionnaire.envoyerToutes();


	return 0;
}




// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
