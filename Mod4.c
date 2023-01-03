/* Solve the following system of equations by Gauss-elimination method:
                         5x - y - z = 3
                         -x + 10y - 2z = 7
                         -x - y + 10z = 8
*/
#include <stdio.h>
int main()
{
    float a[20][20], x[20], b[20][20], d;
    int n, i, j, k, l, m;
    printf("\nEnter the number of variables : ");
    scanf("%d", &n);
    printf("\nEnter augmented matrix below :\n\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n + 1; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n + 1; j++)
        {
            b[i][j] = a[i][j] / a[i][i];
        }
        for (k = i + 1; k <= n; k++)
        {
            for (j = i; j <= n + 1; j++)
            {
                b[k][j] = a[k][j] - a[k][i] * b[i][j];
            }
        }
        printf("\n\nThe %d matrix is : \n\n", i);
        for (l = 1; l <= n; l++)
        {
            for (m = 1; m <= n + 1; m++)
            {
                a[l][m] = b[l][m];
                printf("   %f   ", b[l][m]);
            }
            printf("\n");
        }
    }
    x[n] = a[n][n + 1];
    for (i = n - 1; i >= 1; i--)
    {
        x[i] = a[i][n + 1];
        for (k = i + 1; k <= n; k++)
        {
            x[i] = x[i] - a[i][k] * x[k];
        }
    }
    printf("\n\nThe required solution is: \n");
    for (i = 1; i <= n; i++)
    {
        printf("\nx[%d] = %f", i, x[i]);
    }
}

/*
 5      -1      -1      3
-1      10      -2      7
-1      -1      10      8
*/
