#include <iostream>
using namespace std;


string get_int(string x) {
	int i;
	string integer_n = "";

	for (i = 0; i < x.size(); i++) {
		if (x[i] == '.' or x[i] == ',') {
			break;
		}
		else {
			integer_n += x[i];
		}
	}
	return integer_n;
}

string get_float(string x) {
	int i;
	bool integer = true;
	string float_n = "";

	for (i = 0; i < x.size(); i++) {
		if (integer) {
			if (x[i] == '.' or x[i] == ',') {
				integer = false;
			}
		}
		else {
			float_n += x[i];
		}
	}
	return float_n;
}

int get_integer_from_orig_to_10(string x, int ss) {
	string symbols = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x10 = 0, i;
	for (i = x.size() - 1; i >= 0; i--) {
		x10 += symbols.find(x[i]) * pow(ss, x.size() - 1 - i);
	}
	return x10;
}

float get_float_from_orig_to_10(string x, int ss) {
	string symbols = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	double x10 = 0;
	int i, new_x;
	for (i = 1; i <= x.size(); i++) {
		x10 += symbols.find(x[i - 1]) * pow(ss, i * (-1));
	}
	new_x = x10 * pow(10, 8);
	return new_x / pow(10, 8);
}

string get_integer_from_10_to_new(int x, int ss) {
	string symbols = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	symbols = symbols.substr(0, ss);
	int n = 0, i;
	string new_x;
	while (pow(ss, n) <= x) {
		n++;
	}
	int symbol;
	for (i = n - 1; i >= 0; i--) {
		symbol = x / pow(ss, i);
		new_x += symbols[symbol];
		if (x != 0) {
			x -= symbol * pow(ss, i);
		}
	}
	return new_x;
}

string get_float_from_10_to_new(float x, int ss) {
	string symbols = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	symbols = symbols.substr(0, ss);
	int n, i;
	string new_x;
	for (i = 0; i < 10; i++) {
		x *= ss;
		n = x;
		new_x += symbols[n];
		x -= n;
		if (x == 0) {
			break;
		}
	}
	return new_x;
}

int main() {
	setlocale(0, "");
	string symbols = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int ss1, ss2;
	string orig_n, new_n;
	cout << "Введите исходное число" << endl;
	cin >> orig_n;
	cout << "Введите старое основание" << endl;
	cin >> ss1;
	cout << "Введите новое основание" << endl;
	cin >> ss2;
	
	string orig_float_n, orig_integer_n;
	//разбиение на целую и дробную части
	orig_integer_n = get_int(orig_n);
	orig_float_n = get_float(orig_n);

	//перевод целой и дробной частей в десятичную СС
	int integer_10_n;
	float float_10_n;
	integer_10_n = get_integer_from_orig_to_10(orig_integer_n, ss1);
	float_10_n = get_float_from_orig_to_10(orig_float_n, ss1);

	//перевод целой и дробной частей из десятичной в новую СС
	string new_integer_n, new_float_n;
	new_integer_n = get_integer_from_10_to_new(integer_10_n, ss2);
	new_float_n = get_float_from_10_to_new(float_10_n, ss2);

	//сложение целой и дробной
	new_n = new_integer_n + "." + new_float_n;
	cout << new_n << endl;
	//отрицательное число

	//проверка на СС

	return 0;
}
