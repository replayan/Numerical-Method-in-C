/* Find f(370) using Newtons's Backward Interpolation formula from the given data:
   -----------------------------------------------------------
   | x   | 100  | 150  | 200 | 250  |  300  | 350  |  400 |
  |f(x) | 10.63| 13.03| 15.04| 16.81| 18.42 | 19.90 | 21.27|
   -----------------------------------------------------------
*/

#include <stdio.h>
int main()
{
    float x[20], y[20], X, h, u, d, p = 1;
    int i, j, n;
    printf("\nEnter no. of points : ");
    scanf("%d", &n);
    printf("\nEnter values of X & Y below : \n\n");
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
    printf("\nf(%.0f) = %.2f\n\n", X, d);
}

/*
100  10.63
150  13.03
200  15.04
250  16.81
300  18.42
350  19.90
400  21.27
*/