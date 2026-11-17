// UnitTest91.cpp — модульні тести для функцій dod() та sum() (варіант 22)
#include "CppUnitTest.h"
#include <cmath>
#include "../Lab_9_1/var.h"
#include "../Lab_9_1/dod.h"
#include "../Lab_9_1/sum.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest91
{
    TEST_CLASS(UnitTest91)
    {
    public:

        // dod(): з доданка a = 1 при x = 2, n = 1 має вийти a = 1 * (-2 / 1) = -2
        TEST_METHOD(TestDod)
        {
            nsVar::a = 1;
            nsVar::x = 2;
            nsVar::n = 1;

            nsDod::dod();

            Assert::AreEqual(-2.0, nsVar::a, 1e-12);
        }

        // sum(): сума ряду при x = 1 з точністю 0.0001 має дорівнювати e^(-1)
        TEST_METHOD(TestSum)
        {
            nsVar::x = 1;
            nsVar::e = 0.0001;

            nsSum::sum();

            Assert::AreEqual(exp(-1.0), nsVar::s, 0.0001);
        }
    };
}
