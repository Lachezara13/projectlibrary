#pragma once
class Book
{
	char* author;
	char* title;
	char* genre;
	int year;
	int rating;
	int num;
	char* keyWords;
	char* description;

public:

	Book(const char* author = "", const char* title = "", const char* genre = "", int year = 0, int rating = 0, int num = 0, const char* keyWord = "", const char* description = "");
	Book(const Book& other);
	Book& operator=(const Book& other);
	~Book();

private:

	void copy(const Book& other);
	void del();
	
};

