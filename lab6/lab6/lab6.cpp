// lab6.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "classList.h"


int main()
{
	classList list;
	int temp;
	for (int i = 0; i < 5; i++) {
		cin >> temp;
		list.add(temp);
	}
	list.print;
    return 0;
}

