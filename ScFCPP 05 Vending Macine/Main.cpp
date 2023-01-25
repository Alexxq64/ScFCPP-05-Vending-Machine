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
	SnackSlot* slot = new SnackSlot(10/*���������� ����������, ������� ���������� � ����*/);
	// For example 8 slots in a VM
	int slotCount = 8;
	VendingMachine* machine = new VendingMachine(slotCount /*���������� ������ ��� ������*/);
	cout << "VM" << machine->getNumberVM() << endl;
	slot->addSnack(bounty); //��������� �������� � ����
	slot->addSnack(snickers);

	machine->addSlot(slot); // �������� ���� ������� � �������

	// Here it is possible to put the same slot into the vending machines many times. There should be check for this case.	
	// You can not use the same pointer in different slots of one VM or some VMs. Unique pointer is needed for each slot.
	// Otherwise any changing of one slot will react to other slots with the same pointer.
	// I mean you could repeat string 21 and it would be an error in the logic of the program

	SnackSlot* slot1 = new SnackSlot(10);
	// this constructor creates a VM by default with 10 slots
	VendingMachine* machine1 = new VendingMachine();
	cout << "VM" << machine1->getNumberVM() << endl;
	slot1->addSnack(bounty); //��������� �������� � ����
	slot1->addSnack(bounty);

	SnackSlot* slot2 = new SnackSlot(10/*���������� ����������, ������� ���������� � ����*/);
	slot2->addSnack(snickers); //��������� �������� � ����
	slot2->addSnack(snickers);
	slot2->addSnack(snickers); 
	slot2->addSnack(snickers);

	machine1->addSlot(slot1); // �������� ���� ������� � �������
	machine1->addSlot(slot2); // �������� ���� ������� � �������

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


	cout << "VM" << machine->getNumberVM() << "  Empty slots: " << machine->getEmptySlotsCount() << endl; // ������ �������� ���������� ������ ������ ��� ������
	cout << "VM" << machine1->getNumberVM() << "  Empty slots: " << machine1->getEmptySlotsCount() << endl; // ������ �������� ���������� ������ ������ ��� ������

	delete machine;
	delete machine1;
	delete slot;
	delete slot1;
	delete slot2;
	delete snickers;
	delete bounty;
}