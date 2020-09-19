#include <iostream>
using namespace std;

int sign(float x) {
	if (x > 0) {
		return 1;
	}
	else if (x == 0) {
		return 0;
	}
	else {
		return -1;
	}
}

int main() {
	setlocale(0, "");
	float n;
	cout << "Введите число" << endl;
	cin >> n;
	cout << "Знак числа " << n << " равен " << sign(n) << endl;
	return 0;
}
