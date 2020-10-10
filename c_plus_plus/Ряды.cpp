#include <iostream>
using namespace std;

int main() {
	int old_array[] = {5, 4, 1, 2, 3, 2};
	int i, n = 0, old_ss = 7, new_ss = 3;

	for (i = 0; i < sizeof(old_array) / sizeof(old_array[0]); i++) {
		int st = pow(old_ss, sizeof(old_array) / sizeof(old_array[0]) - 1 - i);
		n += old_array[i] * st;
	}
	int k = 0;
	while (pow(new_ss, k) <= n) {
		k++;
	}
	int* new_array = new int[k];
	for (i = k - 1; i >= 0; i--) {
		new_array[i] = n / pow(new_ss, i);
		if (new_array[i] != 0) {
			n -= new_array[i] * pow(new_ss, i);
		}
		cout << new_array[i];
	}
	cout << endl;
	return 0;
}
