/* Find y(0.3) using Modified Euler's method from the differential
   equation dy/dx = 1 + xy, y(0) = 2, h = 0.1, correct upto 4 decimal places.
*/

#include <stdio.h>
#include <math.h>

float f(float x, float y)
{
    return 1 + (x * y);
}

int main()
{
    float x0, x1, y0, y1, Xn, h, a, y11, y12;
    printf("\nEnter the x0, y0, Xn, h : ");
    scanf("%f %f %f %f", &x0, &y0, &Xn, &h);
    printf("\nEnter accuracy : ");
    scanf("%f", &a);
    do
    {
        y1 = y0 + h * f(x0, y0);
        x1 = x0 + h;
        printf("\n\n value of y = %f at x = %f", y1, x1);
        do
        {
            y11 = y0 + (h / 2) * (f(x0, y0) + f(x1, y1));
            printf("\n Modified value of y = %f at x = %f", y11, x1);
            y12 = y0 + (h / 2) * (f(x0, y0) + f(x1, y11));
            y1 = y12;
            printf("\n Modified value of y = %f at x = %f", y12, x1);
        } while (fabs(y11 - y12) > a);
        x0 = x0 + h;
        y0 = y12;
    } while (x0 < Xn);
    return 0;
}
