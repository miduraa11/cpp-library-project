#pragma once
#include "Publication.h"
#include <string>
#include <fstream>

class Book : public Publication
{
public:
	Book();
	~Book();
	string author;
	int pages;
	string isbn;
	string getAuthor();
	void setAuthor(string author);
	int getPages();
	void setPages(int pages);
	string getIsbn();
	void setIsbn(std::string isbn);
	Book(string title, string author, int year, int pages, string publisher, string isbn);
	void printInfo();
	void saveBookLibrary();

};


