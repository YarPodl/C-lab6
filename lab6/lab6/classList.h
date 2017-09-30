#pragma once


#ifndef classList_H
#define classList_H



class classList
{
private:
	struct elemList {
		int value;
		elemList *next;
	};

public:

	elemList *start;

	int search(int key);

	classList();
	classList(const classList &object);
	~classList();

	classList& operator= (const classList &object);

	void add(int value);
	void print();
	int getCount();
};


#endif

