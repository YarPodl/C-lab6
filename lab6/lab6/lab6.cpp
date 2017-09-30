// lab6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "classList.h"


const int count = 3;


int main()
{
	classList list;
	int temp;
	for (int i = 0; i < count; i++) {
		cin >> temp;
		list.add(temp);
		cout << list.getCount() << '\n';
	}
	classList l2;
	l2 = list;
	
	cin >> temp;
	l2.add(temp);
	list.print();
	l2.print();
    return 0;
}

