/* Using Newton-Raphson method find a root of the equation x*x*x - x = 0.1, correct
   up to four decimal places.
*/
#include <stdio.h>
#include <math.h>

float f(float x)
{
    float f;
    f = (x * x * x) - x - 0.1;
    return (f);
}
float f1(float x)
{
    float f1;
    f1 = (3 * x * x) - 1;
    return (f1);
}
int main()
{
    float a, b, e, x0, x1;
    int k = 0;
    printf("\n Enter the accuracy: ");
    scanf("%f", &e);
    do
    {
        printf("\n Enter interval a,b: ");
        scanf("%f %f", &a, &b);
    } while (f(a) * f(b) > 0.0);
    x0 = (a + b) / 2.0;
    printf("\n x0= %f\n", x0);
    do
    {
        x1 = x0 - (f(x0) / f1(x0));
        x0 = x1;
        printf("\n k=%d \t x%d=%f \t f(x0)=%f \n", k, k, x0, f(x0));
        k = k + 1;
    } while (fabs(f(x0)) >= e);

    printf("\n\n Root of the equation is %f\n", x0);
    printf("\n No. of iteration required: %d\n\n", k);
}
