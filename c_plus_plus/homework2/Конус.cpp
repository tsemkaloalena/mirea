#define  _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(0, "");
	double r, R, h, l, v, s;
	cin >> r >> R >> h;
	l = sqrt(pow(R - r, 2) + pow(h, 2));
	v = (pow(R, 2) + R * r + pow(r, 2)) * h * M_PI / 3;
	s = M_PI * (pow(R, 2) + (R + r) * l + pow(r, 2));
	cout << "Объём равен " << v << endl;
	cout << "Площадь равна " << s << endl;
	return 0;
}
