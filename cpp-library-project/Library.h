#pragma once
#include "Book.h"
#include "Magazine.h"

class Library
{

public:
	Library();
	~Library();
	void addBook(Book* book);
	void addMagazine(Magazine* magazine);
	void printBooks() const;
	void printMagazines();
	void saveBooks();
	void saveMagazines();



private:
	Book** books;
	Magazine** magazines;
	static int booksNumber;
	int magazinesNumber;
};

