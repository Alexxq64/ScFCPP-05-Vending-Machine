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
	slot->addSnack(bounty); //��������� �������� � ����
	slot->addSnack(snickers);

	// For example slotCount  = 10
	int slotCount = 10;
	VendingMachine* machine = new VendingMachine(slotCount /*���������� ������ ��� ������*/);
	machine->addSlot(slot); // �������� ���� ������� � �������

	// !!!!!!!Here it is possible to put the same slot into the vending machine many times. There should be check for this case!!!!!!!!!	

	slot->addSnack(bounty); //��������� �������� � ����

	VendingMachine* machine1 = new VendingMachine();
	machine1->addSlot(slot); // �������� ���� ������� � �������
	machine1->addSlot(slot); // �������� ���� ������� � �������
    slot->giveOutSnack();
	slot->giveOutSnack();
	slot->giveOutSnack();


	cout << "Empty slots: " << machine->getEmptySlotsCount(); // ������ �������� ���������� ������ ������ ��� ������
	cout << "Empty slots: " << machine1->getEmptySlotsCount(); // ������ �������� ���������� ������ ������ ��� ������
	delete machine;
	delete machine1;
	delete slot;
	delete snickers;
	delete bounty;
}