#include <iostream>
#include "SnackSlot.h"

SnackSlot::SnackSlot(int maxCapacity){
	this->maxCapacity = maxCapacity;
	this->firstEmptyCell = 0;
	this->snacks = new Snack*[maxCapacity];
}

bool SnackSlot::addSnack(Snack* snack){
	if (firstEmptyCell == maxCapacity) { 
		std::cout << "���� ��������. � ������� " << maxCapacity << " ��." << std::endl;
		return false; }
	snacks[firstEmptyCell] = snack;
	firstEmptyCell++;
	std::cout << "�������� ����: " << snack->getName() << std::endl;
	return true;
}

//Snack* SnackSlot::giveOutSnack() {
//	if (firstEmptyCell == 0) {
//		std::cout << "���� ������." << std::endl;
//		return nullptr;
//	}
//	snacks[firstEmptyCell] = snack;
//	firstEmptyCell++;
//	std::cout << "�������� ����: " << snack->getName() << std::endl;
//	return true;
//}