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
		for (r = 1; r <= 100; r++) {
			m1 = S * r * pow(1 + r, n) / (12 * (pow(1 + r, n) - 1));
			if (m1 >= m) {
				cout << "Процент равен " << r << endl;
				break;
			}
		}
	}
	return 0;
}
