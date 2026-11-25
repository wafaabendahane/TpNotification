#include "Notification.h"
#include "NotificationEmail.h"

Notification::Notification(string d, string m)
{
	this->destinataire = d;
	this->msg = m;
}

Notification::~Notification()
{
}





void Notification::afficher() const
{
	cout << "Le Destinataire:" << this->destinataire << endl;
	cout << "Le message:" << this->msg << endl;
}
