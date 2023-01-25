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
	int getCurrentQtty() const;

	//Not used. I do not know if I must write these methods
	// 
	//void setCapacity(int qtty);
	//int getCapacity() const;
	//void setCurrentQtty(int qtty);
	//void setIsEmpty(bool empty);
	//bool getIsEmpty() const;
};

