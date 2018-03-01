#include "Magazine.h"
#include <iostream>
#include <fstream>

Magazine::Magazine()
{
}


Magazine::~Magazine()
{
}

int Magazine::getMonth() {
	return month;
}
void Magazine::setMonth(int month) {
	this->month = month;
}
int Magazine::getDay() {
	return day;
}
void Magazine::setDay(int day) {
	this->day = day;
}
std::string Magazine::getLanguage() {
	return language;
}
void Magazine::setLanguage(std::string language) {
	this->language = language;
}

Magazine::Magazine(string title, string publisher, string language, int year, int month, int day) {
	this->setTitle(title);
	this->setPublisher(publisher);
	this->setLanguage(language);
	this->setYear(year);
	this->setMonth(month);
	this->setDay(day);
}

void Magazine::printInfo() {
	cout << "\n" << getTitle() << ", " << getPublisher() << ", " << getYear() << "-" << getMonth() << "-" << getDay() << ", " << getLanguage() << endl;
}

void Magazine::saveMagazineLibrary() {
	ofstream magazineSaveFile;
	magazineSaveFile.open("magazinesSaveFile.txt", ios_base::app);
	magazineSaveFile << getTitle() << "," << getPublisher() << "," << getLanguage() << "," << getYear() << "," << getMonth() << "," << getDay() << "\n";
	magazineSaveFile.close();
}


