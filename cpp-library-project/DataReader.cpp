#include<iostream>
#include "DataReader.h"


int DataReader::passBook = 0;
int DataReader::passMagazine = 0;


DataReader::DataReader()
{
}


DataReader::~DataReader()
{
}


int DataReader::getInt() {
	int number;
	cout << "\nTwój wybór: ";
	cin >> number;
	cin.ignore();
	return number;
}


Book* DataReader::readAndCreateBook() {
	if (passBook == 1) {
		cout << "Tytu³: " << endl;
		getline(cin, title);
		cout << "Autor: " << endl;
		getline(cin, author);
		cout << "Wydawnictwo: " << endl;
		getline(cin, publisher);
		cout << "ISBN: " << endl;
		getline(cin, isbn);
		cout << "Rok wydania: " << endl;
		cin >> releaseDate;
		cout << "Iloœæ stron: " << endl;
		cin >> pages;
		cin.ignore();
		Book *createdBook = new Book(title, author, releaseDate, pages, publisher, isbn);
		return createdBook;
	}
	else {

		booksSaveFile.open("booksSaveFile.txt");
		if (booksSaveFile.good() == true) {
			while (!booksSaveFile.eof()) {

				for (int i = 0; i < lineNumber - 1; ++i) {
					getline(booksSaveFile, booksData);
				}
				lineNumber++;

				istringstream iss(booksData);
				counter = 1;
				while (getline(iss, token, ',')) {

					switch (counter) {
					case 1:
						loadedTitle = token;
						break;
					case 2:
						loadedAuthor = token;
						break;
					case 3:
						loadedYear = stoi(token);
						break;
					case 4:
						loadedPages = stoi(token);
						break;
					case 5:
						loadedPublisher = token;
						break;
					case 6:
						loadedIsbn = token;
						break;
					}
					counter++;

				}

				Book *createdBook = new Book(loadedTitle, loadedAuthor, loadedYear, loadedPages, loadedPublisher, loadedIsbn);
				booksSaveFile.close();
				return createdBook;



			}


		}


	}
}


Magazine* DataReader::readAndCreateMagazine() {
	if (passMagazine == 1) {
		cout << "Tytu³: " << endl;
		getline(cin, title);
		cout << "Wydawnictwo: " << endl;
		getline(cin, publisher);
		cout << "Jêzyk: " << endl;
		getline(cin, language);
		cout << "Rok wydania: " << endl;
		cin >> year;
		cout << "Miesi¹c: " << endl;
		cin >> month;
		cout << "Dzieñ: " << endl;
		cin >> day;
		cin.ignore();
		Magazine *createMagazine = new Magazine(title, publisher, language, year, month, day);
		return createMagazine;
	}
	else {
		magazinesSaveFile.open("magazinesSaveFile.txt");
		if (magazinesSaveFile.good() == true) {
			while (!magazinesSaveFile.eof()) {

				getline(magazinesSaveFile, magazinesData);
				istringstream iss(magazinesData);
				counter = 1;
				while (getline(iss, token, ',')) {

					switch (counter) {
					case 1:
						loadedTitle = token;
						break;
					case 2:
						loadedPublisher = token;
						break;
					case 3:
						loadedLanguage = token;
						break;
					case 4:
						loadedYear = stoi(token);
						break;
					case 5:
						loadedMonth = stoi(token);
						break;
					case 6:
						loadedDay = stoi(token);
						break;
					}
					counter++;

				}
				Magazine *createMagazine = new Magazine(loadedTitle, loadedPublisher, loadedLanguage, loadedYear, loadedMonth, loadedDay);
				magazinesSaveFile.close();
				return createMagazine;
			}

		}
	}
}

