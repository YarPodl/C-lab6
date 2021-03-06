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

	int search(int key) const;

	classList();
	classList(const classList &object);
	~classList();

	classList& operator= (const classList &object);
	classList& operator+ (const classList &object);
	classList& operator- (const classList &object);
	classList& operator/ (const classList &object);
	friend ostream& operator<<(ostream& a, const classList& b);
	friend istream& operator>>(istream& a, classList& b);

	void add(int value);
	int getCount() const;
};


#endif

