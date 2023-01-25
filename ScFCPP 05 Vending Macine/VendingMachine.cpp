#include "VendingMachine.h"
#include <iostream>
using namespace std;

VendingMachine::VendingMachine(int slotQtty){
	_slots = new SnackSlot*[slotQtty];
	_slotQtty = slotQtty;
	_emptySlotsCount = slotQtty;
}

VendingMachine::VendingMachine() : VendingMachine::VendingMachine(10) {}

VendingMachine::~VendingMachine(){
	delete[] _slots;
}

void VendingMachine::setEmptySlotsCount(int qtty){
	_emptySlotsCount = qtty;
}

int VendingMachine::getEmptySlotsCount() const{
	return _emptySlotsCount;
}

void VendingMachine::setSlotQtty(int qtty){
	_slotQtty = qtty;
}

int VendingMachine::getSlotQtty() const{
	return _slotQtty;
}

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
