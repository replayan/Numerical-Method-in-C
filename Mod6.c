/* Compute the value of f(3.5) using Newtons's Forward Interpolation from the following table
   -----------------------------------------
   | x   |  3  | 4  | 5   |  6  | 7  |  8 |
  | f(x) | 27 | 64 | 125 | 216 | 343 | 512 |
   -----------------------------------------
*/

#include <stdio.h>
#include <math.h>
int main()
{
    float x[20], y[20], X, h, u, d, p = 1;
    int i, j, n;
    printf("\nEnter the number of points: ");
    scanf("%d", &n);
    printf("\nEnter the values of X & Y : ");
    printf("\n\nx y=f(x)\n");
    for (i = 1; i <= n; i++)
    {
        scanf("%f%f", &x[i], &y[i]);
    }
    printf("\nEnter the value of X: ");
    scanf("%f", &X);
    h = x[2] - x[1];
    u = (X - x[1]) / h;
    d = y[1];
    for (i = 1; i <= n - 1; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            y[j] = y[j + 1] - y[j];
        }
        p = p * (u - i + 1) / i;
        d = d + p * y[1];
    }
    printf("\nf(%.2f) = %f\n\n", X, d);
}
