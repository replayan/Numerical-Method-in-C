/* Given dy/dx = logₑ(x+y), y(0)=2. Evaluate y(1.2) by Euler's method
   taking step length h = 0.2
*/

#include <stdio.h>
#include <math.h>

float f(float x, float y)
{
    return log(x + y);
}

int main()
{
    float x0, y0, Xn, h;
    printf("\nEnter the x0, y0, Xn, h : ");
    scanf("%f %f %f %f", &x0, &y0, &Xn, &h);
    while (x0 < Xn)
    {
        y0 = y0 + h * f(x0, y0);
        x0 = x0 + h;
        printf("\nThe value of y = %f at x = %.1f", y0, x0);
    }
    return 0;
}
