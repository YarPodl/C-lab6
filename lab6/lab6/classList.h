#pragma once
class classList
{
private:
	struct elemList;

public:

	elemList *start;

	int search(int key);

	classList();

	void add(int value);
	void print();
	int getCount();
};

