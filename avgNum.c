#include <stdio.h>
int main()
{
    int n, i;
    float sum = 0, add;
    printf("Enter size:");
    scanf("%d", &n);
    printf("\nEnter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &add);
        sum += add;
    }
    printf("\nAverage = %f", (sum / n));
    return 0;
}
