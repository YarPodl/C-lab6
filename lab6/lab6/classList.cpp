#include "stdafx.h"
#include "classList.h"




int classList :: search(int key) {
	elemList *current = start;
	while (current) {
		if (current->value == key) {
			return 1;
		}
		current = current->next;
	}
	return 0;
}


classList::classList() {
	start = NULL;
}

classList::classList(const classList & object){
	if (object.start)	{
		start = new elemList;
		start->value = object.start->value;
		elemList *current = object.start->next, *last = start;
		while (current) {
			elemList *newElem = new elemList();
			newElem->value = current->value;
			last->next = newElem;
			last = newElem;
			current = current->next;
		}
		last->next = NULL;
	}
}

classList::~classList(){
	elemList *current = start, *nextElem;
	while (current) {
		nextElem = current->next;
		delete current;
		current = nextElem;
	}
}

classList & classList::operator=(const classList & object){
	if (this != &object) {
		if(this->)
		delete[] this;
		return classList(object);
	}
}

void classList ::  add(int value) {
	if (!search(value)) {
		elemList *newElem = new elemList();
		newElem->value = value;
		newElem->next = start;
		start = newElem;
	}
}
void classList ::  print() {
	elemList *current = start;
	while (current) {
		cout << current->value << ' ';
		current = current->next;
	}
	cout << '\n';
}
int classList ::  getCount() {
	elemList *current = start;
	int i = 0;
	while (current) {
		current = current->next;
		i++;
	}
	return i;
}
