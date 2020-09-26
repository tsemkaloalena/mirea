#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int n, i, p = 2, j;
	cout << "Введите число (границу)" << endl;
	cin >> n;
	int *list = new int[n];
	for (i = 2; i <= n; i++) {
		list[i] = i;
	}
	for (j = 2; j <= n; j++) {
		for (i = 2 * p; i <= n; i += p) {
			list[i] = -1;
		}

		for (i = p + 1; i <= n; i++) {
			if (list[i] != -1) {
				p = list[i];
				break;
			}
		}
	}
	for (i = 2; i <= n; i++) {
		if (list[i] != -1) {
			cout << list[i] << endl;
		}
	}
	
	return 0;
}
