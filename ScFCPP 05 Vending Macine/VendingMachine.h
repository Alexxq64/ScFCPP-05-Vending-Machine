#pragma once
#include "SnackSlot.h"
class VendingMachine
{
	int _slotQtty;
	int _emptySlots;
	SnackSlot** _slots;

public:
	VendingMachine() = default;
	VendingMachine(int slotQtty);
	~VendingMachine();

	bool addSlot(SnackSlot* snack);
	int getEmptySlotsCount() const;
};

