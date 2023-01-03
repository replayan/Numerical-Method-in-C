// Evaluate ∫ ⁰ xeˣ dx using Trapezoidal rule with 6 subintervals
//         ₋₁

#include <stdio.h>
#include <math.h>

float f(float x)
{
    return (x * exp(x));
}

int main()
{
    float a, b, h, trap = 0;
    int i, n;
    printf("\nEnter the LL, UL and no. of subintervals : ");
    scanf("%f%f%d", &a, &b, &n);
    h = (b - a) / n;
    trap = f(a) + f(b);
    for (i = 1; i <= n - 1; i++)
    {
        trap = trap + 2 * f(a + i * h);
    }
    trap = trap * h / 2;
    printf("\nResult : %f\n\n", trap);
    return 0;
}
