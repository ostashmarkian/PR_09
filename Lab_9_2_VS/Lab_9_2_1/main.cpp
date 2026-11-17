// main.cpp — завдання 9.2, частина 1, варіант 22
#include <iostream>
#ifdef _WIN32                 // макрос _WIN32 визначений лише під Windows
#define NOMINMAX
#include <windows.h>          // для SetConsoleOutputCP — кирилиця в консолі
#endif
#include "macros.h"
#include "calc.h"

using namespace std;

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
    double x, y;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

#if IN_RANGE(Z)
    cout << "Скомпільовано гілку 1 <= z < 10:  w = max^2(x + y, x + z)" << endl;
#else
    cout << "Скомпільовано гілку z < 1, z >= 10:  w = min(x^2, 5|y - z|)" << endl;
#endif

    double w = calcW(x, y);

    PRINT(Z);
    PRINT(x);
    PRINT(y);
    PRINT(w);
    return 0;
}
