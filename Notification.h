#pragma once
#include<iostream>
using namespace std;
class Notification
{
private:
	string destinataire;
	string msg;
public:
	Notification(string d, string m);
	virtual ~Notification();
	virtual void afficher()const;
	virtual void envoyer() const = 0;

};

