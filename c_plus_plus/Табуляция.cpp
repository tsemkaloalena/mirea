#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	float x;
	cout << "x \t y\n" << endl;
	for (x = -4; x <= 4; x += 0.5) {
		if (x == 1) {
			cout << "1 \t не сущ.\n" << endl;
		}
		else {
			cout << x << " \t " << (pow(x, 2) - 2 * x + 2) / (x - 1);
			cout << "\n" << endl;
		}
	}
	return 0;
}
