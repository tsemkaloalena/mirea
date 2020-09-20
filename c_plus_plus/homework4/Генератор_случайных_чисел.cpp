#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	//1 вариант
	int m = 37, i, c = 64, n = 3, s;
	//2 вариант
	//int m = 25173, i, c = 65537, n = 13849, s; 
	cout << "Введдите любое число" << endl;
	cin >> s;
	for (i = 1; i <= n; i++) {
		s = (m * s + i) % c;
		cout << s << " ";
	}
	cout << endl;
	return 0;
}
