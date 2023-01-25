#include "VendingMachine.h"
#include <iostream>
using namespace std;

VendingMachine::VendingMachine(int slotQtty){
	_slots = new SnackSlot*[slotQtty];
	_slotQtty = slotQtty;
	_emptySlots = slotQtty;

}

int VendingMachine::getEmptySlotsCount() const{
	return _emptySlots;
}

VendingMachine::~VendingMachine(){
	delete[] _slots;
}

bool VendingMachine::addSlot(SnackSlot* slot)
{
	if (_emptySlots) {
		_slots[_slotQtty - _emptySlots] = slot;
		_emptySlots--;
		return true;
	}
	cout << "Все слоты установлены. Нет места для слотов. " << endl;
	return false;
}
