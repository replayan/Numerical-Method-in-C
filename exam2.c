/*  QUESTION 0.: Find f(0.16) using NFI formula from given data
                   ----------------------------------------
                   | x   |   0.1  | 0.2  | 0.3   |  0.4  |
                  | f(x) | 1.005 | 1.020 | 1.045 | 1.081 |
                  -----------------------------------------
*/

#include <stdio.h>

int main()
{
    int n;
    float a[50], b[50], x, h, u, d, p = 1;
    printf("Enter no. of points : ");
    scanf("%d", &n);
    printf("\nEnter value for x and f(x) : \n\n");
    for (int i = 1; i <= n; ++i)
    {
        scanf("%f%f", &a[i], &b[i]);
    }
    printf("\nEnter value of x : ");
    scanf("%f", &x);
    h = a[2] - a[1];
    u = (x - a[1]) / h;
    d = b[1];
    for (int i = 1; i <= n - 1; ++i)
    {
        for (int j = 1; j <= n - i; ++j)
        {
            b[j] = b[j + 1] - b[j];
        }
        p *= (u - i + 1) / i;
        d += p * b[1];
    }
    printf("\nf(%.2f) = %.3f\n\n", x, d);
}

/*
0.1    1.005
0.2    1.020
0.3    1.045
0.4    1.081
*/