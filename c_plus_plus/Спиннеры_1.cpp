#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int a, b, c, s = 0, n = 1;
	cout << "Чему равно a?" << endl;
	cin >> a;
	cout << "Чему равно b?" << endl;
	cin >> b;
	cout << "Чему равно c?" << endl;
	cin >> c;
	s = a + b * n;
	while (s < c) {
		n++;
		s = a + b * n;
	}
	if (s > c) {
		n--;
	}
	cout << n << endl;
}
