#include "VendingMachine.h"
#include <iostream>

using namespace std;

VendingMachine::VendingMachine(int slotQtty){
	_slots = new SnackSlot*[slotQtty];
	_slotQtty = slotQtty;
	_emptySlotsCount = slotQtty;
	_numberVM = ++counterVM;
}

// I wanted to try nested constructors
VendingMachine::VendingMachine() : VendingMachine::VendingMachine(10) {}

VendingMachine::~VendingMachine(){
	delete[] _slots;
}
SnackSlot* VendingMachine::getSlot(int n) const
{
	return _slots[n];
}

// bool is not used. This method is declared in such way just in case
bool VendingMachine::addSlot(SnackSlot* slot)
{
	if (_emptySlotsCount) {
		_slots[_slotQtty - _emptySlotsCount] = slot;
		_emptySlotsCount--;
		return true;
	}
	cout << "Все слоты установлены. Нет места для слотов. " << endl;
	return false;
}

int VendingMachine::getEmptySlotsCount() const{
	return _emptySlotsCount;
}

int VendingMachine::getLeftQtty(){
	int rest = 0;
	for (int i = 0; i < _slotQtty - _emptySlotsCount; i++) {
		rest += _slots[i]->getCurrentQtty();
	}
	return rest;
}

int VendingMachine::getNumberVM() const {
	return _numberVM;
}



//Not used. I do not know if I must write these methods
// 

//void VendingMachine::setEmptySlotsCount(int qtty){
//	_emptySlotsCount = qtty;
//}
//
//void VendingMachine::setSlotQtty(int qtty){
//	_slotQtty = qtty;
//}
//
//int VendingMachine::getSlotQtty() const{
//	return _slotQtty;
//}
