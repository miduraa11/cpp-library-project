#include "Library.h"
#include <iostream>


Library::Library()
{
	books = new Book*[1000];
	magazines = new Magazine*[1000];
}


Library::~Library()
{
}


void Library::addBook(Book* book) {
	books[booksNumber] = book;
	booksNumber++;
}

void Library::addMagazine(Magazine* magazine) {
	magazines[magazinesNumber] = magazine;
	magazinesNumber++;
}

void Library::printBooks() const {

	if (booksNumber == 0) {
		cout << "\nBrak ksi¹¿ek w bibliotece\n";
	}
	else {
		cout << "\nTYTU£ - AUTOR - ROK - ILOŒÆ STRON - WYDAWNICTWO - ISBN\n";
		for (int i = 0; i < booksNumber; i++) {
			books[i]->printInfo();
		}
	}
}

void Library::printMagazines() {
	if (magazinesNumber == 0) {
		cout << "\nBrak magazynów w bibliotece\n";
	}
	else {
		cout << "\nTYTU£ - WYDAWNICTWO - DATA - JÊZYK\n";
		for (int i = 0; i < magazinesNumber; i++) {
			magazines[i]->printInfo();
		}
	}
}

void Library::saveBooks() {
	if (booksNumber == 0) {
		cout << "\nBrak ksi¹¿ek do zapisu w bibliotece\n";
	}
	for (int i = 0; i < booksNumber; i++) {
		books[i]->saveBookLibrary();
	}


}

void Library::saveMagazines() {
	if (magazinesNumber == 0) {
		cout << "\nBrak gazet do zapisu w bibliotece\n";
	}
	for (int i = 0; i < magazinesNumber; i++) {
		magazines[i]->saveMagazineLibrary();
	}


}




int Library::booksNumber = 0;