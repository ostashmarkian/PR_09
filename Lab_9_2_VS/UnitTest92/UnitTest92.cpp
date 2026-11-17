// UnitTest92.cpp — модульні тести для завдання 9.2 (варіант 22)
#include "CppUnitTest.h"
#include <algorithm>
#include <cmath>
#include "../Lab_9_2_1/macros.h"
#include "../Lab_9_2_1/calc.h"
#include "../Lab_9_2_2/figures.h"
#include "../Lab_9_2_2/area.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest92
{
    TEST_CLASS(UnitTest92)
    {
    public:

        // макроси частини 1, зокрема правильна розстановка дужок
        TEST_METHOD(TestMacros)
        {
            Assert::AreEqual(9, SQR(3));
            Assert::AreEqual(9, SQR(1 + 2));        // без дужок у макросі вийшло б 5
            Assert::AreEqual(25, 100 / SQR(2));     // без дужок вийшло б 100
            Assert::AreEqual(2, ABS(-2));
            Assert::AreEqual(5, MAX(2, 5));
            Assert::AreEqual(2, MIN(2, 5));
        }

        // calcW(): результат має збігатися з формулою тієї гілки, яку обрав препроцесор
        TEST_METHOD(TestCalcW)
        {
            double x = 2, y = 3, z = Z;
#if IN_RANGE(Z)
            double expected = std::pow(std::max(x + y, x + z), 2);
#else
            double expected = std::min(x * x, 5 * std::fabs(y - z));
#endif
            Assert::AreEqual(expected, calcW(x, y), 1e-9);
        }

        // 3, 4, 5 — трикутник, площа 6
        TEST_METHOD(TestTriangle)
        {
            double s;
            Assert::AreEqual(FIG_TRIANGLE, calcArea(3, 4, 5, s));
            Assert::AreEqual(6.0, s, 1e-9);
        }

        // 1, 2, 10 — не трикутник; трапеція з основами 1 і 2, висотою 10: площа 15
        TEST_METHOD(TestTrapezoid)
        {
            double s;
            Assert::AreEqual(FIG_TRAPEZOID, calcArea(1, 2, 10, s));
            Assert::AreEqual(15.0, s, 1e-9);
        }

        // 2, 2, 10 — не трикутник і не трапеція (основи рівні)
        TEST_METHOD(TestError)
        {
            double s;
            Assert::AreEqual(FIG_ERROR, calcArea(2, 2, 10, s));
        }
    };
}
