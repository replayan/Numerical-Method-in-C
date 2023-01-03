/* Find y(0.10) & y(0.15) using Euler's method from the differential
   equation dy/dx = x² + y², y(0) = 0, h = 0.05, correct upto 4 decimal places.
*/

#include <stdio.h>

float f(float x, float y)
{
    return (x * x) + (y * y);
}

int main()
{
    float x0, y0, Xn, h;
    printf("\nEnter the x0, y0, Xn, h : ");
    scanf("%f %f %f %f", &x0, &y0, &Xn, &h);
    do
    {
        y0 = y0 + h * f(x0, y0);
        x0 = x0 + h;
        printf("\nThe value of y = %f at x = %.2f", y0, x0);
    } while (x0 < Xn);
    return 0;
}
