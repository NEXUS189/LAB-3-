#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int floors, rooms;
	cout << "Введите номер этажа : ";
	cin >> floors;
	cout << "Введите номер комнаты: ";
	cin >> rooms;
	if (floors < 1 || rooms < 1 || rooms > 8 || floors > 8) {
		cout << "Проверьте корректность своих данных";
		return 1;
	}
	for (int floor = 1; floor <= floors; floor++) {
		cout << "Этаж " << floor << ":";

		for (int room = 1; room <= rooms; room++) {
			int roomnumbers = floor * 100 + room;
			cout << roomnumbers << " ";
		}
	}
	return 0;
}
