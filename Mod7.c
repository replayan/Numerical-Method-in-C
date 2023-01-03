/* Compute the value of f(5.5) using Lagrange's Interpolation from the following table
   ----------------------------------
   | x   |  0  | 2  | 3  |  5  | 7  |
  | f(x) |  1 | 47 | 97 | 251 | 477 |
   ----------------------------------
*/
#include <stdio.h>
int main()
{
    float x[10], y[10], X, p, d = 0;
    int i, j, n;
    printf("\nEnter the number of points : ");
    scanf("%d", &n);
    printf("\nEnter the values : \nx  f(x)\n");
    for (i = 1; i <= n; i++)
    {
        scanf("%f%f", &x[i], &y[i]);
    }
    printf("\nEnter the value of X : ");
    scanf("%f", &X);
    for (i = 1; i <= n; i++)
    {
        p = y[i];
        for (j = 1; j <= n; j++)
        {
            if (j != i)
            {
                p = p * (X - x[j]) / (x[i] - x[j]);
            }
        }
        d += p;
    }
    printf("\nf(%f) = %f\n\n", X, d);
}

/*
0  1
2  47
3  97
5  251
7  477
*/