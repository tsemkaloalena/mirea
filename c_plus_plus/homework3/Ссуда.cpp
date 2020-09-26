#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(0, "");
	float S, p, m, r, m1;
	int n;
	cout << "Введите значение S" << endl;
	cin >> S;
	cout << "Введите значение m" << endl;
	cin >> m;
	cout << "Введите значение n" << endl;
	cin >> n;
	if (n != 0) {
		for (p = 0; p <= 10000; p++) {
			r = p / 100;
			m1 = S * r * pow(1 + r, n) / (12 * (pow(1 + r, n) - 1));
			if (m1 >= m) {
				cout << "Процент равен " << p - 1 << endl;
				break;
			}
		}

	}

	return 0;
}
