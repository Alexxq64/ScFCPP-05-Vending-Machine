#include <iostream>
#include <locale.h>
#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10/*количество батончиков, которые помещаются в слот*/);
	slot->addSnack(bounty); //Добавляем батончик в слот
	slot->addSnack(snickers);

	// For example slotCount  = 10
	int slotCount = 10;
	VendingMachine* machine = new VendingMachine(slotCount /*Количество слотов для снеков*/);
	machine->addSlot(slot); // Помещаем слот обратно в аппарат

	// !!!!!!!Here it is possible to put the same slot into the vending machine many times. There should be check for this case!!!!!!!!!	

	slot->addSnack(bounty); //Добавляем батончик в слот

	VendingMachine* machine1 = new VendingMachine();
	machine1->addSlot(slot); // Помещаем слот обратно в аппарат
	machine1->addSlot(slot); // Помещаем слот обратно в аппарат
    slot->giveOutSnack();
	slot->giveOutSnack();
	slot->giveOutSnack();


	cout << "Empty slots: " << machine->getEmptySlotsCount(); // Должно выводить количество пустых слотов для снеков
	cout << "Empty slots: " << machine1->getEmptySlotsCount(); // Должно выводить количество пустых слотов для снеков
	delete machine;
	delete machine1;
	delete slot;
	delete snickers;
	delete bounty;
}