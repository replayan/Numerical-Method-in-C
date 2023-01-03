#include <stdio.h>

void addThree(int a, int b, int c)
{
    int ans;
    ans = a + b + c;
    printf("%d", ans);
}

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    addThree(a, b, c);
    return 0;
}
