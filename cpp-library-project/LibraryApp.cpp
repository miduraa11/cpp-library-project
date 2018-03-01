#include <fstream>
#include <iostream>
#include <string>
#include <conio.h>
#include "LibraryControl.h"
#include "DataReader.h"

using namespace std;


int main() {
	setlocale(LC_ALL, "");
	fstream booksFile;
	fstream magazinesFile;
	string booksData;
	string magazinesData;
	string appName = "Biblioteka - Autor: Adam Midura - 2 EF-DI\n";
	cout << appName;


	LibraryControl *libControl = new LibraryControl;
	DataReader *dataReader = new DataReader;


	booksFile.open("booksSaveFile.txt");
	if (booksFile.good() == true) {
		while (getline(booksFile, booksData)) {

			libControl->addBook();

		}

		booksFile.close();
	}
	DataReader::passBook++;

	magazinesFile.open("magazinesSaveFile.txt");
	if (magazinesFile.good() == true) {
		while (getline(magazinesFile, magazinesData)) {

			libControl->addMagazine();

		}
		magazinesFile.close();
	}

	DataReader::passMagazine++;

	libControl->controlLoop();

	ofstream bookFile("booksSaveFile.txt");
	booksFile.close();

	libControl->saveBooks();

	ofstream magazineFile("magazinesSaveFile.txt");
	magazinesFile.close();

	libControl->saveMagazines();

	return 0;
}