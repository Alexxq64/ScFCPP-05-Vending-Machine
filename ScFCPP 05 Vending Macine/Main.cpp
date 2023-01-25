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
	int slotCount = 1;
	VendingMachine* machine = new VendingMachine(slotCount /*���������� ������ ��� ������*/);
	machine->addSlot(slot); // �������� ���� ������� � �������
	machine->addSlot(slot); // �������� ���� ������� � �������

	cout << machine->getEmptySlotsCount(); // ������ �������� ���������� ������ ������ ��� ������
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
}