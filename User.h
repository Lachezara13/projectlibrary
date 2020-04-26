#pragma once
class User
{
	char* name;
	char* password;
	bool admin;

public:

	User(const char* name = "", const char* password = "", bool admin = false);
	User(const User& other);
	User& operator=(const User& other);
	~User();
	char* getName();
	void setName(const char* name);
	void setPassword(const char* password);

private:

	void del();
	void copy(const User& other);

};
