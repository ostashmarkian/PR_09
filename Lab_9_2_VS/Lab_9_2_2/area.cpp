// area.cpp — площа трикутника (якщо існує), інакше трапеції (якщо існує)
#include "area.h"
#include "figures.h"

int calcArea(double a, double b, double c, double& s)
{
    if (IS_TRIANGLE(a, b, c))          // a, b, c — сторони трикутника
    {
        s = HERON(a, b, c);
        return FIG_TRIANGLE;
    }
    if (IS_TRAPEZOID(a, b, c))         // a, b — основи трапеції, c — висота
    {
        s = TRAP_AREA(a, b, c);
        return FIG_TRAPEZOID;
    }
    s = 0;
    return FIG_ERROR;
}
