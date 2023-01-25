#pragma once
#include "SnackSlot.h"
class VendingMachine
{
	int _slotQtty;
	int _emptySlotsCount;
	SnackSlot** _slots;

public:
	VendingMachine();
	VendingMachine(int slotQtty);
	~VendingMachine();

	bool addSlot(SnackSlot* snack);
	void setEmptySlotsCount(int qtty);
	int getEmptySlotsCount() const;
	void setSlotQtty(int qtty);
	int getSlotQtty() const;
};

