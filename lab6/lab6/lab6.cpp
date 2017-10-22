// lab6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "classList.h"
#include "classStandartList.h"
#include "StandartSetList.h"

const int count = 3;



int main()
{
	setlocale(LC_ALL, "Russian");

	classStandartList l1, l2, l3, l4;
	cout << "Первое множество" << '\n';
	for (int i = 0; i < count; i++) {
		cin >> l1;
	}
	cout << "Второе множество" << '\n';
	for (int i = 0; i < count; i++) {
		cin >> l2;
		
	}
	cout << "Третье множество" << '\n';
	for (int i = 0; i < count; i++) {
		cin >> l3;
		
	}
	cout << "Первое множество: " << l1;
	cout << "Размер: " << l1.getCount() << '\n';
	cout << "Второе множество: " << l2;
	cout << "Размер: " << l2.getCount() << '\n';
	cout << "Третье множество: " << l3;
	cout << "Размер: " << l3.getCount() << '\n';

	l4 = l1 + l2 + l3;
	cout << "s1 + s2 + s3: " << l4;

	l4 = l1 - l2;
	cout << "s1 - s2: " << l4;

	l4 = l2 - l1;
	cout << "s2 - s1: " << l4;

	l4 = l2 = l1 / l2;
	cout << "s2 = s1 / s2: " << l4;



	set<int> s1, s2, s3, s4;
	cout << "Первое множество" << '\n';
	for (int i = 0; i < count; i++) {
		cin >> s1;
	}
	cout << "Второе множество" << '\n';
	for (int i = 0; i < count; i++) {
		cin >> s2;
		
	}
	cout << "Третье множество" << '\n';
	for (int i = 0; i < count; i++) {
		cin >> s3;
		
	}
	cout << "Первое множество: " << s1;
	cout << "Размер: " << s1.size() << '\n';
	cout << "Второе множество: " << s2;
	cout << "Размер: " << s2.size() << '\n';
	cout << "Третье множество: " << s3;
	cout << "Размер: " << s3.size() << '\n';

	s4 = s1 + s2 + s3;
	cout << "s1 + s2 + s3: " << s4;

	s4 = s1 - s2;
	cout << "s1 - s2: " << s4;

	s4 = s2 - s1;
	cout << "s2 - s1: " << s4;

	s4 = s2 = s1 / s2 ;
	cout << "s2 = s1 / s2: " << s4;
	



    return 0;
}

