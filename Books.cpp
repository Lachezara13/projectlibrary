#include "Books.h"
#include <iostream>
#pragma warning(disable:4996)

Book::Book(const char* author, const char* title, const char* genre, int year, int rating, int num, const char* keyWords, const char* description)
{
	this->author = new char[strlen(author) + 1];
	strcpy(this->author, author);

	this->title = new char[strlen(title) + 1];
	strcpy(this->title, title);

	this->genre = new char[strlen(genre) + 1];
	strcpy(this->genre, genre);

	this->year = year;

	this->rating = rating;

	this->num = num;

	this->keyWords = new char[strlen(keyWords) + 1];
	strcpy(this->keyWords, keyWords);

	this->description = new char[strlen(description) + 1];
	strcpy(this->description, description);

}

Book::Book(const Book& other)
{
	if (this != &other) {
		copy(other);
	}
}

Book& Book::operator=(const Book& other)
{
	if (this != &other) {
		del();
		copy(other);
	}

	return* this;
}

Book::~Book()
{
	del();
}

void Book::copy(const Book& other)
{
	this->author = new char[strlen(other.author) + 1];
	strcpy(this->author, other.author);

	this->title = new char[strlen(other.title) + 1];
	strcpy(this->title, other.title);

	this->genre = new char[strlen(other.genre) + 1];
	strcpy(this->genre, other.genre);

	this->year = other.year;

	this->rating = other.rating;

	this->num = other.num;

	this->keyWords = new char[strlen(other.keyWords) + 1];
	strcpy(this->keyWords, other.keyWords);

	this->description = new char[strlen(other.description) + 1];
	strcpy(this->description, other.description);

}

void Book::del()
{
	delete[] author;
	delete[] title;
	delete[] genre;
	delete[] keyWords;
	delete[] description;
}