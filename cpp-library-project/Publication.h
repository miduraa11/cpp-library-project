#pragma once
#include <string>
using namespace std;

class Publication
{
public:
	Publication();
	~Publication();
	int year;
	string title;
	string publisher;
	int getYear();
	void setYear(int year);
	string getTitle();
	void setTitle(string title);
	string getPublisher();
	void setPublisher(string publisher);
};

