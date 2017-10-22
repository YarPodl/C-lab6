#pragma once
#include "stdafx.h"

class classStandartList
{
private:
	list<int> values;
public:
	
	int getCount() const;
	classStandartList& operator= (const classStandartList &object);
	classStandartList& operator+ (const classStandartList &object);
	classStandartList& operator- (const classStandartList &object);
	classStandartList& operator/ (const classStandartList &object);
	friend ostream& operator<<(ostream& a, const classStandartList& b);
	friend istream& operator >> (istream& a, classStandartList& b);
	int search(int key) const;
	classStandartList();
	classStandartList(const classStandartList &object);
	void add(const int value);
	~classStandartList();
};

