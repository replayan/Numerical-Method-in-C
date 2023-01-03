//  QUESTION 1.: Find root of x + ln(x) - 2 = 0 using NR method

#include <stdio.h>
#include <math.h>

double f(double x)
{
    double f;
    f = x + log(x) - 2;
    return (f);
}
double f1(double x)
{
    double f1;
    f1 = 1 + 1 / x;
    return (f1);
}
int main()
{
    double a, b, e, x0, x1;
    int k = 0;
    printf("\n Enter accuracy: ");
    scanf("%lf", &e);
    do
    {
        printf("\n Enter interval a,b: ");
        scanf("%lf %lf", &a, &b);
    } while (f(a) * f(b) > 0.0);
    x0 = (a + b) / 2.0;
    do
    {
        x1 = x0 - (f(x0) / f1(x0));
        x0 = x1;
        printf("\n k = %d \t x%d = %lf \t f(x0) = %lf \n", k, k, x0, f(x0));
        k++;
    } while (fabs(f(x0)) >= e);

    printf("\n\n ROOT : %lf\n", x0);
    printf("\n ITERATION : %d\n\n", k);
}
