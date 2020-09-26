#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int n, m;
	cout << "Чему равно m?" << endl;
	cin >> m;
	cout << "Чему равно n?" << endl;
	cin >> n;

	while (m != n) {
		if (m > n) {
			m -= n;
		}
		else {
			n -= m;
		}
	}
	cout << "Наибольший общий делитель равен " << n << endl;

	return 0;
}
