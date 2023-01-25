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
	bool giveOutSnack();
	void setCapacity(int qtty);
	int getCapacity() const;
	void setCurrentQtty(int qtty);
	int getCurrentQtty() const;
	void setIsEmpty(bool empty);
	bool getIsEmpty() const;
};

