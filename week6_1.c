#include <stdio.h>

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < 9; i++)
    {
        if (a[i - 1] % 2 != 0 && a[i + 1] % 2 != 0)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}