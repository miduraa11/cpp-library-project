#include "Publication.h"



Publication::Publication()
{
}


Publication::~Publication()
{
}

int Publication::getYear() {
	return year;
}

void Publication::setYear(int year) {
	this->year = year;
}
string Publication::getTitle() {
	return title;
}

void Publication::setTitle(string title) {
	this->title = title;
}
string Publication::getPublisher() {
	return publisher;
}

void Publication::setPublisher(string publisher) {
	this->publisher = publisher;
}