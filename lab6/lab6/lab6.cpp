// lab6.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	cout << "������ ���������" << '\n';
	for (int i = 0; i < count; i++) {
		cin >> l1;
	}
	cout << "������ ���������" << '\n';
	for (int i = 0; i < count; i++) {
		cin >> l2;
		
	}
	cout << "������ ���������" << '\n';
	for (int i = 0; i < count; i++) {
		cin >> l3;
		
	}
	cout << "������ ���������: " << l1;
	cout << "������: " << l1.getCount() << '\n';
	cout << "������ ���������: " << l2;
	cout << "������: " << l2.getCount() << '\n';
	cout << "������ ���������: " << l3;
	cout << "������: " << l3.getCount() << '\n';

	l4 = l1 + l2 + l3;
	cout << "s1 + s2 + s3: " << l4;

	l4 = l1 - l2;
	cout << "s1 - s2: " << l4;

	l4 = l2 - l1;
	cout << "s2 - s1: " << l4;

	l4 = l2 = l1 / l2;
	cout << "s2 = s1 / s2: " << l4;



	set<int> s1, s2, s3, s4;
	cout << "������ ���������" << '\n';
	for (int i = 0; i < count; i++) {
		cin >> s1;
	}
	cout << "������ ���������" << '\n';
	for (int i = 0; i < count; i++) {
		cin >> s2;
		
	}
	cout << "������ ���������" << '\n';
	for (int i = 0; i < count; i++) {
		cin >> s3;
		
	}
	cout << "������ ���������: " << s1;
	cout << "������: " << s1.size() << '\n';
	cout << "������ ���������: " << s2;
	cout << "������: " << s2.size() << '\n';
	cout << "������ ���������: " << s3;
	cout << "������: " << s3.size() << '\n';

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

