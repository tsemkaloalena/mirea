#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(0, "");
	float x, y, b;
	cout << "Введите x" << endl;
	cin >> x;
	cout << "Введите y" << endl;
	cin >> y;
	cout << "Введите b" << endl;
	cin >> b;
	if ((b > y) and (b >= x)) {
		cout << "Функция z = " << log(b - y) * sqrt(b - x) << endl;
	}
	else {
		cout << "При данных x, y и b функция z не существует." << endl;
	}
	return 0;
}
