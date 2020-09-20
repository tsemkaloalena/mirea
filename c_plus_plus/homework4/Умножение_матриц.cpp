#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int i, j, k;
	int a[3][4] = {
		{5, 2, 0, 10},
		{3, 5, 2, 5},
		{20, 0, 0, 0 }
	};
	float b[4][2] = {
		{1.20, 0.50},
		{2.80, 0.40},
		{5.00, 1.00},
		{2.00, 1.50}
	};
	float c[3][2] = {
		{0.0, 0.0},
		{0.0, 0.0},
		{0.0, 0.0}
	};
	//умножение матриц
	for (k = 0; k < 2; k++) {
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 4; j++) {
				c[i][k] += a[i][j] * b[j][k];				
			}
		}
	}

	//пункт 1
	float max_proceed = c[0][0], min_proceed = c[0][0];
	int max_proceeder = 1, min_proceeder = 1;
	for (i = 1; i < 3; i++) {
		if (c[i][0] > max_proceed) {
			max_proceed = c[i][0];
			max_proceeder = i + 1;
		}
		else if (c[i][0] < min_proceed) {
			min_proceed = c[i][0];
			min_proceeder = i + 1;
		}
	}
	cout << "1)\t" << max_proceeder << "-й продавец выручил больше всего денег с продажи." << endl;
	cout << "\t" << min_proceeder << "-й продавец выручил меньше всего денег с продажи." << endl;
	cout << endl;

	//пункт 2
	float max_commission = c[0][1], min_commission = c[0][1];
	int max_commissioner = 1, min_commissioner = 1;
	for (i = 1; i < 3; i++) {
		if (c[i][1] > max_commission) {
			max_commission = c[i][1];
			max_commissioner = i + 1;
		}
		else if (c[i][1] < min_commission) {
			min_commission = c[i][1];
			min_commissioner = i + 1;
		}
	}
	cout << "2)\t" << max_commissioner << "-й продавец получил наибольшие комиссионные." << endl;
	cout << "\t" << min_commissioner << "-й продавец получил наименьшие комиссионные." << endl;
	cout << endl;

	//пункт 3, 4
	float sum_proceed = 0, sum_commission = 0;
	for (i = 0; i < 3; i++) {
		sum_proceed += c[i][0];
		sum_commission += c[i][1];
	}
	cout << "3)\t" << "Общая сумма денег, вырученных за проданные товары, равна " << sum_proceed << endl;
	cout << endl;
	cout << "4)\t" << "Продавцы получили " << sum_commission << " комиссионных." << endl;
	cout << endl;

	//пункт 5
	cout << "5)\t" << "Общая сумма денег, прошедших через руки продавцов, равна " << sum_proceed + sum_commission << endl;

	//вывод матрицы c
	cout << endl;
	cout << endl;
	cout << "\tМатрица C: " << endl;
	cout << endl;
	for (k = 0; k < 3; k++) {
		for (i = 0; i < 2; i++) {
			cout << "\t" << c[k][i] << "\t";
		}
		cout << endl;
	}
	return 0;
}
