// sum.cpp — файл реалізації: сума ряду Тейлора для e^(-x)
#include <cmath>
#include "sum.h"
#include "dod.h"
#include "var.h"

using namespace nsVar;
using namespace nsDod;

void nsSum::sum()
{
    n = 0;
    a = 1;            // перший доданок a0 = 1
    s = a;            // сума поки що = a0
    do
    {
        n++;
        dod();        // a стає наступним доданком
        s += a;       // додаємо його до суми
    } while (fabs(a) > e);   // поки доданок не став меншим за точність
}
