#pragma once
#include "Snack.h"

class SnackSlot
{
	int maxCapacity;
	int firstEmptyCell;
	Snack** snacks;

public:
	SnackSlot() = default;
	SnackSlot(int maxCapacity);
	~SnackSlot() = default;

	bool addSnack(Snack* snack);
	//Snack* giveOutSnack();
};

