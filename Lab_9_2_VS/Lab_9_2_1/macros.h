// macros.h — макроси для обчислення w (завдання 9.2, частина 1, варіант 22)
#pragma once
#include <iostream>

#define Z 5                     // значення z: від нього залежить, яка гілка формули компілюється

#define SQR(a)       ((a) * (a))                     // піднесення до квадрата
#define ABS(a)       ((a) < 0 ? -(a) : (a))          // модуль числа
#define MAX(a, b)    ((a) > (b) ? (a) : (b))         // більше з двох чисел
#define MIN(a, b)    ((a) < (b) ? (a) : (b))         // менше з двох чисел
#define IN_RANGE(z)  ((z) >= 1 && (z) < 10)          // логічний вираз: 1 <= z < 10
#define PRINT(v)     std::cout << #v << " = " << (v) << std::endl   // виведення
