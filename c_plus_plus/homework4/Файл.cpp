#include <iostream>
#include <fstream>
using namespace std;

int main() {
	setlocale(0, "");
	int n, i, summ, x;
	cout << "Введите число" << endl;
	cin >> n;
	ofstream fout("file.txt", ios::out);
	for (i = n; i < n + 10; i++) {
		fout << i << " ";
	}
	fout.close();

	fstream data;
	data.open("file.txt", ios::in);
	summ = 0;
	for (i = 0; i < 10; i++) {
		data >> x;
		summ += x;
	}
	cout << "Сумма чисел равна " << summ << endl;
	data.close();
	return 0;
}
