#include <stdio.h>

int main()
{
    int a, width, timer;
    scanf("%d", &a);
    width = (a % 2 == 0) ? a - 1 : a;
    for (int i = 0; i < a / 2; i++)
    {
        timer = (width - (2 * i)) / 2;

        for (int j = 0; j < timer; j++)
        {
            printf("_");
        }

        printf("*");

        for (int j = 0; j < width - 2 - (timer * 2); j++)
        {
            printf("_");
        }
        if (i != 0)
        {
            printf("*");
        }

        for (int j = 0; j < timer; j++)
        {
            printf("_");
        }
        printf("\n");
    }

    if (a % 2 != 0)
    {
        printf("*");
        for (int i = 0; i < width - 2; i++)
        {
            printf("_");
        }
        printf("*\n");
    }

    for (int i = (a / 2) - 1; i >= 0; i--)
    {
        timer = (width - (2 * i)) / 2;

        for (int j = 0; j < timer; j++)
        {
            printf("_");
        }

        printf("*");

        for (int j = 0; j < width - 2 - (timer * 2); j++)
        {
            printf("_");
        }
        if (i != 0)
        {
            printf("*");
        }

        for (int j = 0; j < timer; j++)
        {
            printf("_");
        }
        printf("\n");
    }
    return 0;
}
