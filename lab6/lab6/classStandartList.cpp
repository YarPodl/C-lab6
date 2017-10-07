#include "stdafx.h"
#include "classStandartList.h"


classStandartList::classStandartList(){

}


classStandartList::~classStandartList(){

}

void classStandartList::add(const int value) {
	if(find(list.begin(), list.end(), value) == list.end()){
		list.push_front(value);
	}
}
