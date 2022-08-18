#include <stdio.h>
int cmp(int a, int b)
{
    if (a > b)
    {
        printf("%d", a);
    }
    else
    {
        printf("%d", b);
    }
}

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    cmp(a, b);
    return 0;
}