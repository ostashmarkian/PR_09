// figures.h — макроси для обчислення площі трикутника або трапеції (завдання 9.2, частина 2, варіант 22)
#pragma once
#include <cmath>
#include <iostream>

// три числа задаються макросами
#define NUM1 3.0
#define NUM2 4.0
#define NUM3 5.0

// умова існування трикутника: кожна сторона менша за суму двох інших
#define IS_TRIANGLE(a, b, c)  ((a) + (b) > (c) && (a) + (c) > (b) && (b) + (c) > (a))

// півпериметр і площа трикутника за формулою Герона
#define HALF_P(a, b, c)  (((a) + (b) + (c)) / 2)
#define HERON(a, b, c)   sqrt(HALF_P(a, b, c) * (HALF_P(a, b, c) - (a)) * \
                              (HALF_P(a, b, c) - (b)) * (HALF_P(a, b, c) - (c)))

// умова існування трапеції з основами a, b і висотою h
#define IS_TRAPEZOID(a, b, h)  ((a) > 0 && (b) > 0 && (h) > 0 && (a) != (b))

// площа трапеції
#define TRAP_AREA(a, b, h)  (((a) + (b)) / 2 * (h))

#define PRINT(v)     std::cout << #v << " = " << (v) << std::endl   // виведення
