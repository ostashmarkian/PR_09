// main.cpp — головний файл проекту: введення, цикл по x, виведення таблиці
#include <iostream>
#include <iomanip>     // setw, setprecision — форматний вивід
#include <cmath>       // exp — щоб порівняти з точним значенням
#include "var.h"       // глобальні змінні
#include "sum.h"       // функція sum()

using namespace std;
using namespace nsVar;
using namespace nsSum;

int main()
{
    cout << "x_p = "; cin >> x_p;   // початок інтервалу
    cout << "x_k = "; cin >> x_k;   // кінець інтервалу
    cout << "dx  = "; cin >> dx;    // крок
    cout << "e   = "; cin >> e;     // точність
    cout << endl;

    cout << fixed;
    // заголовок таблиці
    cout << "   Tabulation of exp(-x) using Taylor series" << endl;
    // шапка таблиці
    cout << "-----------------------------------------------" << endl;
    cout << "|" << setw(8)  << "x"       << " |"
                << setw(12) << "exp(-x)" << " |"
                << setw(12) << "S"       << " |"
                << setw(6)  << "n"       << " |" << endl;
    cout << "-----------------------------------------------" << endl;

    x = x_p;
    while (x <= x_k + dx / 2)       // +dx/2 — захист від похибки double
    {
        sum();                      // рахує s і n для поточного x
        cout << "|" << setw(8)  << setprecision(2) << x       << " |"
                    << setw(12) << setprecision(6) << exp(-x) << " |"
                    << setw(12) << s                          << " |"
                    << setw(6)  << n                          << " |" << endl;
        x += dx;
    }
    cout << "-----------------------------------------------" << endl;

    return 0;
}
