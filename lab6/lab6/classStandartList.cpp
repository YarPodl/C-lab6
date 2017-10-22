#include "stdafx.h"
#include "classStandartList.h"




int classStandartList::getCount() const
{
	return values.size();
}

classStandartList & classStandartList::operator=(const classStandartList & object)
{
	values = object.values;
	return *this;
}

classStandartList & classStandartList::operator+(const classStandartList & object)
{
	classStandartList *newObject = new classStandartList(object);
	for (list<int> ::iterator i = values.begin(); i != values.end(); i++)
	{
		newObject->add(*i);
	}
	return *newObject; 
}

classStandartList & classStandartList::operator-(const classStandartList & object)
{
	classStandartList *newObject = new classStandartList();
	for (list<int> ::iterator i = values.begin(); i != values.end(); i++)
	{
		if (!object.search(*i)) {
			newObject->add(*i);
		}
	}
	return *newObject;
}

classStandartList & classStandartList::operator/(const classStandartList & object)
{
	classStandartList *newObject = new classStandartList();
	for (list<int> ::iterator i = values.begin(); i != values.end(); i++)
	{
		if (object.search(*i) && search(*i)) {
			newObject->add(*i);
		}
	}
	return *newObject;
}

int classStandartList::search(int key) const
{
	list<int> :: const_iterator result = find(values.cbegin(), values.cend(), key);
	return result == values.cend() ? 0 : 1;
}

classStandartList::classStandartList(){

}

classStandartList::classStandartList(const classStandartList & object)
{
	values = object.values;
}


classStandartList::~classStandartList(){

}

void classStandartList::add(const int value) {
	if(find(values.begin(), values.end(), value) == values.end()){
		values.push_front(value);
	}
}

ostream & operator<<(ostream & a, const classStandartList & b)
{
	for (list<int> :: const_iterator i = b.values.begin(); i != b.values.end(); i++)
	{
		a << *i << ' ';
	}
	a << '\n';
	return a;
}

istream & operator >> (istream & a, classStandartList & b)
{
	int temp;
	a >> temp;
	b.add(temp);
	return a;
}
