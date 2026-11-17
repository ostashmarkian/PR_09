// main.cpp — завдання 9.2, частина 2, варіант 22
#include <iostream>
#ifdef _WIN32                 // макрос _WIN32 визначений лише під Windows
#define NOMINMAX
#include <windows.h>          // для SetConsoleOutputCP — кирилиця в консолі
#endif
#include "figures.h"
#include "area.h"

using namespace std;

// #define DEBUG              // розкоментувати, щоб увімкнути налагоджувальний вивід

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
    PRINT(NUM1);
    PRINT(NUM2);
    PRINT(NUM3);

#ifdef DEBUG
    cout << "[DEBUG] файл " << __FILE__ << ", рядок " << __LINE__
         << ", компіляція " << __DATE__ << " " << __TIME__ << endl;
    PRINT(IS_TRIANGLE(NUM1, NUM2, NUM3));
    PRINT(IS_TRAPEZOID(NUM1, NUM2, NUM3));
#endif

    double s;
    switch (calcArea(NUM1, NUM2, NUM3, s))
    {
    case FIG_TRIANGLE:
        cout << "Трикутник зі сторонами " << NUM1 << ", " << NUM2 << ", " << NUM3
             << " існує." << endl;
        PRINT(s);
        break;
    case FIG_TRAPEZOID:
        cout << "Трикутник не існує. Трапеція з основами " << NUM1 << " і " << NUM2
             << " та висотою " << NUM3 << " існує." << endl;
        PRINT(s);
        break;
    default:
        cout << "Помилка: з чисел " << NUM1 << ", " << NUM2 << ", " << NUM3
             << " не можна побудувати ні трикутник, ні трапецію." << endl;
    }
    return 0;
}
