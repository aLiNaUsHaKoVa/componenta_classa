#pragma once
#include "subject.h"
using namespace std;
class Book
{
public:
	Book() {}

	Book(vector<std::string> nameExam, vector<int> resultExam) {
		for (size_t i = 0; i < nameExam.size(); i++)
		{
			exam_.insert(make_pair(nameExam[i], resultExam[i]));
		}
	}


	friend ostream& operator<<(ostream& os, const Book& gr);
	friend istream& operator>>(istream& in, Book& gr);
private:
	//nameExam resultExam
	map<string, int> exam_;
};
