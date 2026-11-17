// area.h — оголошення функції обчислення площі
#pragma once

#define FIG_ERROR      0     // ні трикутник, ні трапеція не існують
#define FIG_TRIANGLE   1     // обчислено площу трикутника
#define FIG_TRAPEZOID  2     // обчислено площу трапеції

// повертає вид фігури (FIG_...), площу записує в s
int calcArea(double a, double b, double c, double& s);
