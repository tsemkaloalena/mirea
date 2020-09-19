#define  _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <Windows.h>
using namespace std;

void s_circle() {
	float r;
	cout << "Введите значение радиуса" << endl;
	cin >> r;
	cout << "Площадь круга равна " << M_PI * r * r << endl;
}

void s_triangle() {
	float a, b, c, p;
	cout << "Введите значения трёх сторон" << endl;
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	cout << "Площадь треугольника равна " << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
}

void s_rectangle() {
	float a, b;
	cout << "Введите значения двух сторон" << endl;
	cin >> a >> b;
	cout << "Площадь прямоугольника равна " << a * b << endl;
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	//setlocale(0, "");
	string type;
	cout << "Площадь какой фигуры Вы хотите узнать? (Введите слово 'круг', 'треугольник' или 'прямоугольник')" << endl;
	cin >> type;
	if (type == "круг") {
		s_circle();
	}
	else if (type == "треугольник") {
		s_triangle();
	}
	else if (type == "прямоугольник") {
		s_rectangle();
	}
	else {
		cout << "Я такого не знаю" << endl;
	}
	return 0;
}
