#include <iostream>
using namespace std;

bool k = false;

void f(int x, int a, int b) {
	if (x >= 3) {
		f(x - 3, a + 1, b);
		f(x - 4, a, b + 1);
	}
	else if (x == 0) {
		if (not k) {
			cout << a << endl << b << endl;
			k = true;
		}
	}
}

int main() {
	setlocale(0, "");
	int m, a = 0, b = 0;
	cin >> m;

	f(m, a, b);
	if (not k) {
		cout << a << endl << b << endl;
	}

	return 0;
}
