#pragma once
#include "Notification.h"
class NotificationEmail :public Notification
{
	string objet;
public:
	NotificationEmail(string o,string d, string m);
	~NotificationEmail();
	void envoyer() const ;
	void afficher() const;
};

