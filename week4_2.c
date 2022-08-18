#include <stdio.h>

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        if (a[i] % 2 != 0)
        {
            if (a[i + 2] % 2 != 0)
            {
                printf("%d ", a[i + 1]);
            }
        }
    }
    return 0;
}