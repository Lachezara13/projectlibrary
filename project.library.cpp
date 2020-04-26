#include <iostream>
#include <fstream>
#include "Books.h"
#include "User.h"
std::ofstream library;

void open() 
{
	library.open("books.txt");

	if (library.is_open()) 
	{
		std::cout << "file is open" << std::endl;
	} std::cout << "not open" << std::endl;
}

void close() 
{
	library.close();
}

void help()
{
	std::cout << "In this library you can choose between several oparations (open, close, save, ect), just type your operation correctly.";
}

void login(User a)
{
	char inputName[50];
	char inputPassword[50];
	std::cin.getline(inputName, 50);
	std::cin.getline(inputPassword, 50);

	std::cout << "Enter username and password:" << std::endl;
	std::cout << "Username: ";
	std::cin >> inputName;
	a.setName(inputName);

	std::cout << "Password: ";
	std::cin.getline(inputPassword, 50);
	a.setPassword(inputPassword);

	bool* admin = false;
}

void logout() {

}

int main()
{
	User admin("admin", "i<3c++", true);

	std::cout << "Welcome, "<< admin.getName() << " to the online library!" << std::endl;
	std::cout << "Enter a command:" << std::endl;

	Book hp("JK Rowling", "Harry Potter", "fantasy", 1997, 10,001, "magic, friendship, school, enemy, battles", "A story about a young boy with magical powers...");

	return 0;
}

