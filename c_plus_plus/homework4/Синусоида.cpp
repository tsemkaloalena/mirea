#define _USE_MATH_DEFINES
#include <iostream>
#include <Windows.h>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    HDC hDC = GetDC(GetConsoleWindow());

    HPEN cP = CreatePen(PS_SOLID, 5, RGB(255, 128, 64));
    SelectObject(hDC, cP);
    POINT p;
    int x = 10, y = 10, i;

    for (i = 0; i < 1500; i++) {
        MoveToEx(hDC, i, sin(M_PI * i / 96) * 50+150, &p);
        LineTo(hDC, i, sin(M_PI * (i) / 96) * 50+150);
    }
    cin.get();
    return 0;
}
