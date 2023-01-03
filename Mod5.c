/* Solve the following system of equations by Gauss-Seidel method:
                         9x₁ - 2x₂ + x₃ = 50
                         x₁ + 5x₂ - 3x₃ = 18
                        -2x₁ + 2x₂ + 7x₃ = 19
*/
#include <stdio.h>
int main()
{
    float a[20][20], x[20], d;
    int m, n;
    printf("\nEnter no. of variables : ");
    scanf("%d", &n);
    printf("\nEnter no. of iterations : ");
    scanf("%d", &m);
    printf("\nEnter augmented matrix below : \n\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }
    printf("\n Enter the initial approximation : ");
    for (int i = 1; i <= n; i++)
    {
        scanf("%f", &x[i]);
    }
    for (int k = 1; k <= m; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            d = a[i][n + 1];
            for (int j = 1; j <= n; j++)
            {
                if (j != i)
                {
                    d = d - a[i][j] * x[j];
                }
            }
            x[i] = d / a[i][i];
            printf("\nx[%d]= %f\n", i, x[i]);
        }
    }
    printf("\nThe solution is : ");
    for (int i = 1; i <= n; i++)
    {
        printf("\n x[%d] = %f\n", i, x[i]);
    }
}

/*
 9   -2    1   50
 1    5   -3   18
-2    2    7   19
*/