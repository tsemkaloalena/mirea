#include <iostream>
#include <fstream>
#include <map>
#include <Windows.h>
using namespace std;

int main() {
	setlocale(0, "");
	int minus = 0, plus = 0;
	int m = 37, i = 1, c = 42, n = 3, s = 5, j, k;
	int x[4], y[4], yy;

	//Генерируем 4 числа
	x[0] = (m * s + i) % c % 10;
	i++;
	x[1] = (m * s + i) % c % 10;
	i++;
	while (x[1] == x[0]) {
		x[1] = (m * s + i) % c % 10;
		i++;
	}
	x[2] = (m * s + i) % c % 10;
	i++;
	while (x[2] == x[0] or x[2] == x[1]) {
		x[2] = (m * s + i) % c % 10;
		i++;
	}
	x[3] = (m * s + i) % c % 10;
	i++;
	while (x[3] == x[0] or x[3] == x[1] or x[3] == x[2]) {
		x[3] = (m * s + i) % c % 10;
		i++;
	}

	//cout << x[0] << " " << x[1] << " " << x[2] << " " << x[3] << endl;


	while (plus != 4) {
		minus = 0;
		plus = 0;

		//Считываем числа пользователя
		cin >> yy;
		y[0] = yy / 1000;
		y[1] = (yy / 100) % 10;
		y[2] = (yy % 100) / 10;
		y[3] = yy % 10;


		//Считаем кол-во плюсов и минусов
		
		for (j = 0; j < 4; j++) {
			bool pl = false, mi = false;
			if (x[j] == y[j]) {
				plus++;
				pl = true;
			}
			else {
				for (k = 0; k < 4; k++) {
					if ((x[k] == y[j]) and (k != j)) {
						minus++;
						mi = true;
					}
				}
			}
			if (pl) {
				cout << "+";
			}
			else if (mi) {
				cout << "-";
			}
			else {
				cout << "*";
			}
		}
		cout << endl;
		
		//cout << y[0] << " " << y[1] << " " << y[2] << " " << y[3] << endl;
		cout << "Плюсов: " << plus << endl;
		cout << "Минусов: " << minus << endl;
		cout << endl;
	}

	return 0;
}
