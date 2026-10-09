#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int guests;
	int reguests = 0;
	int reguests2 = 0;
	cout << "Введите количество гостей ( 0 чтобы завершить):" << "\n";
	cin >> guests;
	while (guests != 0) {
			if (guests > 0) {
				reguests++;

				if (guests > 2) {

					reguests2++;
				}
			}

		cin >> guests;
	}
	cout << "Количество всех заявок:" << reguests << "\n";
	cout << "Количество заявок более чем на двух гостей:" << reguests2 << "\n";
	return 0;
}