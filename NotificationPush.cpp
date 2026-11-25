#include "NotificationPush.h"
NotificationPush::NotificationPush(string a, string d, string m) :Notification(d, m)
{
	this->app = a;
}

NotificationPush::~NotificationPush()
{
}
void NotificationPush::envoyer() const
{
	this->NotificationPush::afficher();
}
void NotificationPush::afficher() const
{
	this->Notification::afficher();
	cout << "Application:" << this->app << endl;
}


