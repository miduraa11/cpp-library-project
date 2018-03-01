#pragma once
#include "Publication.h"

class Magazine : public Publication
{
public:
	Magazine();
	~Magazine();
	int month;
	int day;
	string language;
	int getMonth();
	void setMonth(int month);
	int getDay();
	void setDay(int day);
	string getLanguage();
	void setLanguage(string language);
	Magazine(string title, string publisher, string language, int year, int month, int day);
	void printInfo();
	void saveMagazineLibrary();

};

