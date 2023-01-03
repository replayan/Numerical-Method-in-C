/* Compute the value of f(38) using Newtons's Backward Interpolation from the following table
   ----------------------------------------------------------------------------
   | x   |  15      | 20        | 25        |  30     | 35        |  40       |
  |f(x) | 0.2588190 | 0.3420201 | 0.4226183 | 0.5     | 0.5735764 | 0.6427876 |
   ----------------------------------------------------------------------------
*/
#include <stdio.h>
int main()
{
    float x[20], y[20], X, h, u, d, p = 1;
    int i, j, n;
    printf("\nEnter the number of points : ");
    scanf("%d", &n);
    printf("\nEnter the values of X & Y below.");
    printf("\n\nx   y=f(x)\n\n");
    for (i = 1; i <= n; i++)
    {
        scanf("%f%f", &x[i], &y[i]);
    }
    printf("\nEnter the value of X : ");
    scanf("%f", &X);
    h = x[2] - x[1];
    u = (X - x[n]) / h;
    d = y[n];
    for (i = 1; i <= n - 1; i++)
    {
        for (j = n; j >= i + 1; j--)
        {
            y[j] = y[j] - y[j - 1];
        }
        p = p * (u + i - 1) / i;
        d = d + p * y[n];
    }
    printf("\nf(%.0f) = %.7f\n\n", X, d);
}
