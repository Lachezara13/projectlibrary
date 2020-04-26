#include "User.h"
#include <iostream>
#pragma warning (disable: 4996)

User::User(const char* name, const char* password, bool admin)
{
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);

	this->password = new char[strlen(password) + 1];
	strcpy(this->password, password);

	this->admin = admin;
}

User::User(const User& other)
{
	if (this != &other) {
		copy(other);
	}
}

User& User::operator=(const User& other) 
{
	if (this != &other) {
		del();
		copy(other);
	}

	return* this;
}

User::~User()
{
	del();
}

void User::del()
{
	delete[] name;
	delete[]password;
}

void User::copy(const User& other)
{
	this->name = new char[strlen(other.name) + 1];
	strcpy(this->name, other.name);

	this->password = new char[strlen(other.password) + 1];
	strcpy(this->password, other.password);

	this->admin = other.admin;
}

char* User::getName()
{
	return name;
}

void User::setName(const char* name)
{
	strcpy(this->name, name);
}

void User:: setPassword(const char* password)
{
	strcpy(this->password, password);
}