#include "LibraryControl.h"
#include <iostream>
using namespace std;


LibraryControl::LibraryControl()
{
	dataReader = new DataReader();
	library = new Library();
}


LibraryControl::~LibraryControl()
{
}

void LibraryControl::controlLoop() {
	int option;
	printOptions();
	while ((option = dataReader->getInt()) != 0) {
		switch (option) {
		case 1:
			addBook();
			break;
		case 2:
			printBooks();
			break;
		case 3:
			addMagazine();
			break;
		case 4:
			printMagazines();
			break;
		default:
			cout << "Nie ma takiej opcji, wprowad� ponownie: \n";
		}
		printOptions();
	}

}

void LibraryControl::printOptions() {
	cout << "\nWybierz opcj�: \n";
	cout << "0 - wyj�cie z programu\n";
	cout << "1 - dodanie nowej ksi��ki\n";
	cout << "2 - wy�wietl dost�pne ksi��ki\n";
	cout << "3 - dodanie nowego czasopisma\n";
	cout << "4 - wy�wietl dost�pne czasopisma\n";
}

void LibraryControl::addBook() {
	Book *book = dataReader->readAndCreateBook();
	library->addBook(book);
}

void LibraryControl::printBooks() {
	library->printBooks();
}

void LibraryControl::addMagazine() {
	Magazine *magazine = dataReader->readAndCreateMagazine();
	library->addMagazine(magazine);
}

void LibraryControl::printMagazines() {
	library->printMagazines();
}

void LibraryControl::saveBooks() {
	library->saveBooks();
}

void LibraryControl::saveMagazines() {
	library->saveMagazines();
}