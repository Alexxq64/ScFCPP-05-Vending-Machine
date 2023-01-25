#include <iostream>
#include "SnackSlot.h"

SnackSlot::SnackSlot(int capacity){
	_capacity = capacity;
	_currentQtty = 0;
	_snacks = new Snack*[capacity];
	_isEmpty = true;
}

SnackSlot::~SnackSlot(){
	delete[] _snacks;
}

bool SnackSlot::addSnack(Snack* snack){
	if (_currentQtty == _capacity) {
		std::cout << "Слот заполнен. В наличии " << _capacity << " шт." << std::endl;
		return false; }
	_snacks[_currentQtty] = snack;
	_currentQtty++;
	_isEmpty = false;
	std::cout << "Добавлен снэк: " << snack->getName() << std::endl;
	return true;
}

//Snack* SnackSlot::giveOutSnack() {
//	if (firstEmptyCell == 0) {
//		std::cout << "Слот пустой." << std::endl;
//		return nullptr;
//	}
//	snacks[firstEmptyCell] = snack;
//	firstEmptyCell++;
//	std::cout << "Добавлен снэк: " << snack->getName() << std::endl;
//	return true;
//}