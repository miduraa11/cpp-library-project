#include "Book.h"
#include<iostream>


Book::Book()
{
}


Book::~Book()
{
}


std::string Book::getAuthor() {
	return author;
}

void Book::setAuthor(string author) {
	this->author = author;
}

int Book::getPages() {
	return pages;
}

void Book::setPages(int pages) {
	this->pages = pages;
}

std::string Book::getIsbn() {
	return isbn;
}

void Book::setIsbn(string isbn) {
	this->isbn = isbn;
}


Book::Book(string title, string author, int year, int pages, string publisher, string isbn) {
	this->setTitle(title);
	this->setAuthor(author);
	this->setYear(year);
	this->setPages(pages);
	this->setPublisher(publisher);
	this->setIsbn(isbn);
}


void Book::printInfo() {
	cout << "\n" << getTitle() << ", " << getAuthor() << ", " << getYear() << ", " << getPages() << ", " << getPublisher() << ", " << getIsbn() << endl;
}

void Book::saveBookLibrary() {
	ofstream booksSaveFile;
	booksSaveFile.open("booksSaveFile.txt", ios_base::app);
	booksSaveFile << getTitle() << "," << getAuthor() << "," << getYear() << "," << getPages() << "," << getPublisher() << "," << getIsbn() << "\n";
	booksSaveFile.close();
}