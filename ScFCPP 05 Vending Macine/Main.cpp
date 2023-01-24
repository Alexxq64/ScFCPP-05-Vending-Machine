#include <iostream>
#include <locale>
#include "Snack.h"
#include "SnackSlot.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10/*������⢮ ��⮭稪��, ����� ��������� � ᫮�*/);
	slot->addSnack(bounty); //������塞 ��⮭稪 � ᫮�
	slot->addSnack(snickers);
	VendingMachine* machine = new VendingMachine(slotCount /*������⢮ ᫮⮢ ��� ᭥���*/);
	machine->addSlot(slot); // ����頥� ᫮� ���⭮ � ������

	cout << machine->getEmptySlotsCount(); // ������ �뢮���� ������⢮ ������ ᫮⮢ ��� ᭥���
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
}
