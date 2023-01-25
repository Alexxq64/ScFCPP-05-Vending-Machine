#pragma once
#include "SnackSlot.h"

// Counter of VM. It uses for naming of VM
static int counterVM = 0;

class VendingMachine
{
	int _numberVM;
	int _slotQtty;
	int _emptySlotsCount;
	SnackSlot** _slots;

public:
	VendingMachine();
	VendingMachine(int slotQtty);
	~VendingMachine();

	bool addSlot(SnackSlot* snack);
	int getNumberVM() const;
	SnackSlot* getSlot(int n) const;
	int getEmptySlotsCount() const;

	//Not used. I do not know if I must write these methods
	// 
	//void setEmptySlotsCount(int qtty);
	//void setSlotQtty(int qtty);
	//int getSlotQtty() const;
};

