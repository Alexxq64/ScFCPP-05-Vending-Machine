#pragma once
#include "Snack.h"

class SnackSlot
{
	int _capacity;
	int _currentQtty;
	bool _isEmpty;
	Snack** _snacks;

public:
	SnackSlot() = default;
	SnackSlot(int capacity);
	~SnackSlot();

	bool addSnack(Snack* snack);
	//Snack* giveOutSnack();
};

