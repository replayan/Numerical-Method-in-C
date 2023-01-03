/* Find y(0.2) using Runge-kutta method of order 2 from the equation
   dy/dx = x + y² given y(0) = 1, h = 0.1.
*/

#include <stdio.h>

float f(float x, float y)
{
    return (x + y * y);
}

int main()
{
    float x0, y0, xn, h, k, k1, k2;
    printf("\n Enter the value of x0, y0, xn and h : ");
    scanf("%f %f %f %f", &x0, &y0, &xn, &h);
    while (x0 < xn)
    {
        k1 = h * f(x0, y0);
        k2 = h * f(x0 + h, y0 + k1);
        k = (k1 + k2) / 2;
        y0 = y0 + k;
        x0 = x0 + h;
        printf("\n Value of y = (%f) at x = (%f)", y0, x0);
    }
    return 0;
}
