/* Find y(0.6) using Runge-kutta method of order 4 from the equation
   dy/dx = (0.5 - x + y²) / (1 + y + x²) given y(0) = 0, h = 0.1.
*/

#include <stdio.h>

float f(float x, float y)
{
    return (0.5 - x + y * y) / (1 + y + x * x);
}

int main()
{
    float x0, y0, xn, h, k, k1, k2, k3, k4;
    printf("\n Enter the value of x0, y0, xn and h : ");
    scanf("%f %f %f %f", &x0, &y0, &xn, &h);
    while (x0 < xn)
    {
        k1 = h * f(x0, y0);
        k2 = h * f(x0 + (h / 2), y0 + (k1 / 2));
        k3 = h * f(x0 + (h / 2), y0 + (k2 / 2));
        k4 = h * f(x0 + h, y0 + k3);
        k = (k1 + (2 * k2) + (2 * k3) + k4) / 6;
        y0 = y0 + k;
        x0 = x0 + h;
        printf("\n Value of y = %f at x = %.1f ", y0, x0);
    }
    return 0;
}
