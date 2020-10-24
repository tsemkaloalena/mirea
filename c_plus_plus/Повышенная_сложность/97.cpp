#include <iostream>
#include <fstream>
#include <map>
#include <Windows.h>
using namespace std;


//int neighbours(int x, int y, int data) {
//	int k = 21, s = 0;
//	if (0 <= x <= k) {
//		if (data[x])
//	}
//}

int main() {
	setlocale(0, "");
	cout << "Введите количество поколений" << endl;
	int n, generation = 1;
	cin >> n;

	// Пункт 4
	int k = 21, i, j;
	int present[21][21], future[21][21];
	string symbol;
	fstream data;
	data.open("work.dat", ios::in);
	ofstream fout("work.out", ios::out);

	cout << "Поколение 1" << endl;
	for (i = 0; i < k; i++) {
		for (j = 0; j < k; j++) {
			data >> symbol;
			if (symbol == "X") {
				present[i][j] = 1;
				fout << 1;
				cout << 1;
			}
			else {
				present[i][j] = 0;
				fout << 0;
				cout << 0;
			}
			fout << " ";
			cout << " ";
		}
		fout << endl;
		cout << endl;
	}
	generation++;
	data.close();
	fout.close();
	int s; //s - кол-во соседей
	int zeros = 1;
	while (generation <= n and zeros > 0) {
		zeros = 0;

		for (i = 0; i < k; i++) {
			for (j = 0; j < k; j++) {
				s = 0;
				// Пункт 5
				if (present[i][j] > 0 and present[i][j] < 12) {
					if (i > 0 and present[i - 1][j] > 0 and present[i - 1][j] < 12) {
						s++;
					}
					if (i < k - 1 and present[i + 1][j] > 0 and present[i + 1][j] < 12) {
						s++;
					}
					if (j > 0 and present[i][j - 1] > 0 and present[i][j - 1] < 12) {
						s++;
					}
					if (j < k - 1 and present[i][j + 1] > 0 and present[i][j + 1] < 12) {
						s++;
					}
					if (s == 2 or s == 3) {
						future[i][j] = present[i][j] + 1;
					}
					else {
						future[i][j] = 0;
					}
				}
				if (present[i][j] == 0) {
					future[i][j] = 1;
				}
				if (present[i][j] == 12) {
					future[i][j] = 0;
				}
				// Пункт 6
				if (future[i][j] == 0) {
					zeros++;
				}
			}
		}
		// Пункт 7
		ofstream fout("work.out", ios::out);
		cout << "Поколение " << generation << " (В этом поколении " << k * k - zeros << " живых микробов)" << endl;
		for (i = 0; i < k; i++) {
			for (j = 0; j < k; j++) {
				present[i][j] = future[i][j];
				fout << future[i][j] << " ";
				cout << future[i][j] << " ";
			}
			fout << endl;
			cout << endl;
		}
		fout.close();
		generation++;
	}
	return 0;
}
