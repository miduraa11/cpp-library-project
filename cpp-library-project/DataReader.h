#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <conio.h>
#include <sstream>
#include "Book.h"
#include "Magazine.h"


class DataReader
{

public:
	DataReader();
	~DataReader();
	string title;
	string author;
	string publisher;
	string isbn;
	string language;
	int year;
	int month;
	int day;
	int releaseDate;
	int pages;
	static int passBook;
	static int passMagazine;
	int getInt();
	Book* readAndCreateBook();
	Magazine* readAndCreateMagazine();
	string loadedTitle;
	string loadedAuthor;
	string loadedPublisher;
	string loadedIsbn;
	string loadedLanguage;
	int loadedYear;
	int loadedMonth;
	int loadedDay;
	int loadedReleaseDate;
	int loadedPages;

private:
	fstream booksSaveFile;
	fstream magazinesSaveFile;
	string booksData;
	string magazinesData;
	string token;
	int counter;
	int lineNumber = 2;

};

