// lab6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "classList.h"


const int count = 3;


int main()
{
	/*classList list;
	int temp;
	for (int i = 0; i < count; i++) {
		cin >> temp;
		list.add(temp);
		cout << list.getCount() << '\n';
	}*/

	classList l1, l2, l3, l4;
	l1.add(1);
	l1.add(2);
	l1.add(3);

	l2.add(2);
	l2.add(5);
	l2.add(8);

	

	cout << l1;
	cout << l2;

	l3 = l1 + l2;
	cout << l3;

	l3 = l1 - l2;
	cout << l3;

	l3 = l1 * l2;
	cout << l3;

	classList l5 = l3;
	cout << l5;

    return 0;
}

