#include <iostream>
using namespace std;

int main() {
	int i, j;
	for (i = 0; i < 13; i++) {
		if (i < 6) {
			for (j = 0; j < 8; j++) {
				cout << "*";
			}
			for (j = 0; j < 28; j++) {
				cout << "_";
			}
		}
		else {
			for (j = 0; j < 36; j++) {
				cout << "_";
			}
		}
		cout << "" << endl;
	}
	
	return 0;
}
