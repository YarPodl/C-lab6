#include "stdafx.h"

class classList
{
private:
	struct elemList {
		int value;
		elemList *next;
	};

public:

	elemList *start;

	int search(int key) {
		elemList *current = start;
		while (current) {
			if (current->value == key) {
				return 1;
			}
			current = current->next;
		}
		return 0;
	}

	classList() {
		start = NULL;
	}

	void add(int value) {
		if (!search(value)) {
			elemList newElem;
			newElem.value = value;
			newElem.next = start;
			start = &newElem;
		}
	}
	void print() {
		elemList *current = start;
		while (current) {
			cout << current->value << ' ' << '\n';
			current = current->next;
		}
	}
	int getCount() {
		elemList *current = start;
		int i = 0;
		while (current) {
			current = current->next;
			i++;
		}
		return i;
	}
};
