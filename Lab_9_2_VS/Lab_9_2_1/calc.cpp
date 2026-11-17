// calc.cpp — обчислення w; гілку формули обирає препроцесор за значенням Z
#include "calc.h"
#include "macros.h"

#ifndef Z
#error "Не задано значення Z (див. macros.h)"
#endif

double calcW(double x, double y)
{
    double z = Z;
#if IN_RANGE(Z)                          // 1 <= z < 10
    return SQR(MAX(x + y, x + z));       // w = max^2(x + y, x + z)
#else                                    // z < 1 або z >= 10
    return MIN(SQR(x), 5 * ABS(y - z));  // w = min(x^2, 5|y - z|)
#endif
}
