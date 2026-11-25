#include "NotificationSMS.h"
NotificationSMS::NotificationSMS(string n, string d, string m):Notification(d,m)
{
	this->numero = n;
}

NotificationSMS::~NotificationSMS()
{
}
void NotificationSMS::envoyer() const
{
	this->NotificationSMS::afficher();
}
void NotificationSMS::afficher() const
{
	this->Notification::afficher();
	cout << "Le numero:" << this->numero << endl;
}

