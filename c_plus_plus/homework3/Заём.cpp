#include <iostream>
#include <math.h>
using namespace std;

int zaem() {
	setlocale(0, "");
	float S, p, m, r;
	int n;
	cout << "Введите значение S" << endl;
	cin >> S;
	cout << "Введите значение p" << endl;
	cin >> p;
	r = p / 100;
	cout << "Введите значение n" << endl;
	cin >> n;
	if (n == 0 or r == 0 or (r == -2 and n % 2 == 0)) {
		cout << "Не могу посчитать" << endl;
	}
	else {
		m = S * r * pow(1 + r, n) / (12 * (pow(1 + r, n) - 1));
		cout << "Месячная выплата равна " << m << endl;
	}
	return 0;
}
