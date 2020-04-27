#pragma once
#include "book.h"
using namespace std;

class Group
{
public:
	Group() {};
	Group(string nameGroup, map<std::string, Book> books) {
		this->nameGroup_ = nameGroup;
		this->books_ = books;
	};

	Group(string nameGroup, vector<string> fio, vector<string> nameExams, vector<vector<int>> resultExam) {
		this->nameGroup_ = nameGroup;
		this->nameExams_ = nameExams;
		for (size_t i = 0; i < fio.size(); i++)
		{
			books_.insert(make_pair(fio[i], Book(nameExams_, resultExam[i])));
		}
	}
	~Group() {

	}

	void deleteBook(string fio) {
		books_.erase(books_.find(fio));
	}

	void addBook(string fio, vector<int> resultExam) {
		books_.insert(make_pair(fio, Book(nameExams_, resultExam)));
	}

	void addBook(string fio) {
		books_.insert(make_pair(fio, Book()));
	}

	void operator+(Group& G) {
		for (auto it = G.books_.begin(); it != G.books_.end(); ++it)
			this->books_.insert(make_pair(it->first, it->second));
	}

	void operator-(Group& G) {
		for (auto it = G.books_.begin(); it != G.books_.end(); ++it)
			this->books_.erase(it->first);
	}

	Book& getBook(string key) {
		return books_[key];
	}

private:
	
	static map<int,string> plane;

	string nameGroup_;
	vector<string> nameExams_;

	map<string, Book> books_;
};

auto Group::plane = Exam.getSbjPlane();
