#pragma once
#include "Book.h";
#include "DataReader.h";
#include "Library.h";
#include "Magazine.h";

class LibraryControl
{
public:
	LibraryControl();
	~LibraryControl();
	void controlLoop();
	void addBook();
	void addMagazine();
	void saveBooks();
	void saveMagazines();

private:
	DataReader *dataReader;
	Library *library;
	void printOptions();
	void printBooks();
	void printMagazines();
};

