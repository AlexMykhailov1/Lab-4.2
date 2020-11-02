// Lab4.2.cpp
// Михайлов Олександр
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 19


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, y, xfirst, xlast, A, B, dx;

    cout << "xfirst = "; cin >> xfirst;
    cout << "xlast = "; cin >> xlast;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |" << setw(7) << "y" << "       |" << endl;
    cout << "---------------------------" << endl;

    x = xfirst;
    while (x <= xlast) {
        A = 2 * x - 13, 5;
        if (x < -1)
            B = sin(x) / (1 + cos(x) * cos(x));
        else
            if (x >= -1 && x <= 1)
                B = cos(sin(x) * sin(x)) * cos(sin(x) * sin(x)) - 1;
            else
                B = log10(x + 0.4);
        y = A - B;
        cout << "|" << setw(7) << setprecision(2) << x << "   |" << setw(10) << setprecision(3) << y << "    |" << endl;
        x += dx;
    }

    cout << "---------------------------" << endl;
    cin.get();
    return 0;
}
