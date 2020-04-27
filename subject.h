#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <map>
#include <ios>

using namespace std;

class Subject
{
public:
	Subject(string name)
	{
		name_ = name;
		sbjPlane.insert(make_pair(count, name_));
		count++;
	}
	map<int, std::string> getSbjPlane()
	{
		return this->sbjPlane;
	}

	virtual void showSubjectType() = 0;
protected:
	string name_;
	map<int, string> sbjPlane;
private:
	size_t count = 1;
};

class Exam : public Subject
{
public:
	void showSubjectType()
	{
		cout << "Exam" << endl;
	}

private:

}Exam;

class Test : public Subject
{
public:
	void showSubjectType()
	{
		cout << "Test" << endl;
	}
private:

}Tst;
