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
	// For example 8 slots in a VM
	int slotCount = 8;
	VendingMachine* machine = new VendingMachine(slotCount /*Количество слотов для снеков*/);
	cout << "VM" << machine->getNumberVM() << endl;
	slot->addSnack(bounty); //Добавляем батончик в слот
	slot->addSnack(snickers);

	machine->addSlot(slot); // Помещаем слот обратно в аппарат

	// Here it is possible to put the same slot into the vending machines many times. There should be check for this case.	
	// You can not use the same pointer in different slots of one VM or some VMs. Unique pointer is needed for each slot.
	// Otherwise any changing of one slot will react to other slots with the same pointer.
	// I mean you could repeat string 21 and it would be an error in the logic of the program

	SnackSlot* slot1 = new SnackSlot(10);
	// this constructor creates a VM by default with 10 slots
	VendingMachine* machine1 = new VendingMachine();
	cout << "VM" << machine1->getNumberVM() << endl;
	slot1->addSnack(bounty); //Добавляем батончик в слот
	slot1->addSnack(bounty);

	SnackSlot* slot2 = new SnackSlot(10/*количество батончиков, которые помещаются в слот*/);
	slot2->addSnack(snickers); //Добавляем батончик в слот
	slot2->addSnack(snickers);
	slot2->addSnack(snickers); 
	slot2->addSnack(snickers);

	machine1->addSlot(slot1); // Помещаем слот обратно в аппарат
	machine1->addSlot(slot2); // Помещаем слот обратно в аппарат

	cout << "VM" << machine->getNumberVM() << endl;
	machine->getSlot(0)->giveOutSnack();
	machine->getSlot(0)->giveOutSnack();
	machine->getSlot(0)->giveOutSnack();
	machine->getSlot(0)->giveOutSnack();

	cout << "VM" << machine1->getNumberVM() << endl;
	machine1->getSlot(0)->giveOutSnack();
	machine1->getSlot(0)->giveOutSnack();
	machine1->getSlot(1)->giveOutSnack();
	machine1->getSlot(1)->giveOutSnack();


	cout << "VM" << machine->getNumberVM() << "  Empty slots: " << machine->getEmptySlotsCount() << endl; // Должно выводить количество пустых слотов для снеков
	cout << "VM" << machine1->getNumberVM() << "  Empty slots: " << machine1->getEmptySlotsCount() << endl; // Должно выводить количество пустых слотов для снеков

	delete machine;
	delete machine1;
	delete slot;
	delete slot1;
	delete slot2;
	delete snickers;
	delete bounty;
}