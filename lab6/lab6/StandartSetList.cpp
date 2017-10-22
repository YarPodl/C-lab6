#include "stdafx.h"
#include "StandartSetList.h"

set<int>& operator+(const set<int>& object1, const set<int>& object2)
{
	set<int> *newObject = new set<int>(object1);
	newObject->insert(object2.cbegin(), object2.cend());
	return *newObject;
}

set<int>& operator-(const set<int>& object1, const set<int>& object2)
{
	set<int> *newObject = new set<int>();
	for (set<int> ::iterator i = object1.begin(); i != object1.end(); i++)
	{
		if (object2.find(*i) == object2.end()) {
			newObject->insert(*i);
		}
	}
	return *newObject;
}

set<int>& operator/(const set<int>& object1, const set<int>& object2)
{
	set<int> *newObject = new set<int>();
	for (set<int> ::iterator i = object1.begin(); i != object1.end(); i++)
	{
		if ( (object1.find(*i) != object1.end()) & (object2.find(*i) != object2.end()) ) {
			newObject->insert(*i);
		}
	}
	return *newObject;
}

ostream & operator<<(ostream & a, const set<int>& b)
{
	for (set<int> ::iterator i = b.begin(); i != b.end(); i++)
	{
		a << *i << ' ';
	}
	a << '\n';
	return a;
}

istream & operator >> (istream & a, set<int>& b)
{
	int temp;
	a >> temp;
	b.insert(temp);
	return a;
}
