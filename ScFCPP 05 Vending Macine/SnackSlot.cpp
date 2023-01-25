#include <iostream>
#include "SnackSlot.h"
using namespace std;

SnackSlot::SnackSlot(int capacity){
	_capacity = capacity;
	_currentQtty = 0;
	_snacks = new Snack*[capacity];
	_isEmpty = true;
}

SnackSlot::~SnackSlot(){
	delete[] _snacks;
}

// bool is not used. This method is declared in such way just in case
bool SnackSlot::addSnack(Snack* snack){
	if (_currentQtty == _capacity) {
		cout << "Слот заполнен. В наличии " << _capacity << " шт." << endl;
		return false; }
	_snacks[_currentQtty] = snack;
	_currentQtty++;
	_isEmpty = false;
	cout << "Добавлен снэк: " << snack->getName() << endl;
	return true;
}

// bool is not used. This method is declared in such way just in case
bool SnackSlot::giveOutSnack() {
	if (_isEmpty) {
		cout << "Слот пустой." << endl;
		return false;
	}
	_currentQtty--;
	if (_currentQtty == 0) _isEmpty = true;
	cout << "Выдан снэк: " << _snacks[_currentQtty]->getName() << endl;
	_snacks[_currentQtty] = nullptr;
	return true;
}

//Not used. I do not know if I must write these methods
// 

//void SnackSlot::setCapacity(int qtty){
//	_capacity = qtty;
//}
//
//int SnackSlot::getCapacity() const{
//	return _capacity;
//}
//
//void SnackSlot::setCurrentQtty(int qtty){
//	_currentQtty = qtty;
//}
//
//int SnackSlot::getCurrentQtty() const{
//	return _currentQtty;
//}
//
//void SnackSlot::setIsEmpty(bool empty){
//	_isEmpty = empty;
//}
//
//bool SnackSlot::getIsEmpty() const{
//	return _isEmpty;
//}
