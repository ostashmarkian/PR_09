// dod.cpp — файл реалізації: наступний доданок через рекурентне співвідношення
#include "dod.h"
#include "var.h"

using namespace nsVar;

void nsDod::dod()
{
    a *= -x / n;      // a(n) = a(n-1) * q,   q = -x / n
}
