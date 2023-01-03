// Simpson's 1/3 rule

#include <stdio.h>
#include <math.h>

float f(float x)
{
    return (sqrt(1 - pow(x, 3)));
}

int main()
{
    float a, b, h, simp;
    printf("\nEnter the LL, UL and step length : ");
    scanf("%f%f%f", &a, &b, &h);
    int n = (b - a) / h;
    simp = f(a) + f(b);
    for (int i = 1; i <= n - 1; i += 2) // odd intervals
    {
        simp = simp + 4 * f(a + i * h);
    }
    for (int i = 2; i <= n - 2; i += 2) // even intervals
    {
        simp = simp + 2 * f(a + i * h);
    }
    simp = simp * h / 3;
    printf("\nResult : %f\n\n", simp);
    return 0;
}
