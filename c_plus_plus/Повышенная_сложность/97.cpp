#include <iostream>
#include <fstream>
#include <map>
#include <Windows.h>
using namespace std;


int neighbours(int x, int y) {

}

int main() {
	setlocale(0, "");
	cout << "Введите количество поколений" << endl;
	int n;
	cin >> n;

	// Пункт 4
	int k = 21, i, j;
	string symbol;
	fstream data;
	data.open("work.dat", ios::in);
	ofstream fout("work.out", ios::out);
	for (i = 0; i < k; i++) {
		for (j = 0; j < k; j++) {
			data >> symbol;
			if (symbol == "x") {
				fout << 1;
			}
			else {
				fout << 0;
			}
			fout << " ";
		}
		fout << endl;
	}
	data.close();

	// Пункт 5
	neighbours(i, j);
	fout << endl;
	for (i = 0; i < k; i++) {
		for (j = 0; j < k; j++) {
			
		}
	}

	fout.close();

	return 0;
}
