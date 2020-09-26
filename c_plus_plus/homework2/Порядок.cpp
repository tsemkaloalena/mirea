#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int n, i, k;
	bool f;

	cout << "Введите первое значение" << endl;
	cin >> n;

	cout << "Введите кол-во значений" << endl;
	cin >> k;

	cout << "Последовательность возрастает?" << endl;
	cin >> f;


	if (n < 0) {
		cout << n << " - не натуральное число";
	}

	else {
			for (i = 0; i < k; i++) {
				if (f) {
					cout << i + 1 << ") " << n + i << endl;
				}
				else {
					cout << i + 1 << ") " << n - i << endl;
				}
			}
		}


}
