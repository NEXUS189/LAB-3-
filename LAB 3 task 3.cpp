#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int floor;
	do {
		cout << "Введите этаж ( от 1 до 12):";
		cin >> floor;
		if (floor < 1 || floor > 12)
			cout << "Неверный номер этажа.";
	} while (floor < 1 || floor > 12);
	int startroom = floor * 100 + 1;
	int endroom = floor * 100 + 20;
	cout << "Диапозон комнат для этажа " << floor << ":";
	cout << startroom << "..." << endroom;

	return 0;
}