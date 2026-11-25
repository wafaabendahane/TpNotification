#include "NotificationEmail.h"
#include "NotificationSMS.h"
NotificationEmail::NotificationEmail(string o, string d, string m):Notification(d,m)
{
	this->objet = o;
}

NotificationEmail::~NotificationEmail()
{
	cout << "Destructeur de la classe NotificationEmail"  << endl;
}



void NotificationEmail::envoyer() const
{
	this->NotificationEmail::afficher();
}
void NotificationEmail::afficher() const
{
	this->Notification::afficher();
	cout << "L objet:" << this->objet << endl;
}

