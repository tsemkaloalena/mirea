#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(0, "");
	float x, a;
	cout << "Черму равен x?" << endl;
	cin >> x;
	cout << "Черму равно a?" << endl;
	cin >> a;

	if (abs(x) < 1) {
		if (x != 0) {
			cout << "w=" << a * log(abs(x)) << endl;
		}
		else {
			cout << "Значение w не определено" << endl;
		}
	}
	else {
		if (pow(x, 2) <= a) {
			cout << "w=" << sqrt(a - pow(x, 2)) << endl;
		}
		else {
			cout << "Значение w не определено" << endl;
		}
	}

	return 0;
}
