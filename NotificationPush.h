#pragma once
#include "Notification.h"
class NotificationPush :public Notification
{
private:
	string app;
public:
	NotificationPush(string a, string d, string m);
	~NotificationPush();
	void envoyer() const;
	void afficher() const;
};

