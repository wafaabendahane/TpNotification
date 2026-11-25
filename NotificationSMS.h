#pragma once
#include "Notification.h"
class NotificationSMS :public Notification
{
private:
	 string numero;
	 string operateur;
public:
	NotificationSMS(string n, string d, string m);
	~NotificationSMS();
	void envoyer() const;
	void afficher() const;


};

