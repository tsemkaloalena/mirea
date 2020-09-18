#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(0, "");
	float S, p, n, m, r;
	cout << "Введите значение S" << endl;
	cin >> S;
	cout << "Введите значение p" << endl;
	cin >> p;
	r = p / 100;
	cout << "Введите значение n" << endl;
	cin >> n;
	m = S * r * pow(1 + r, n) / (12 * (pow(1 + r, n) - 1));
	cout << "Месячная выплата равна " << m << endl;
}
