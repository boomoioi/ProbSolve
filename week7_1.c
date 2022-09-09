// จตุรัสกล 78

#include <stdio.h>

int verti(int (*arr)[M]), int len, int col)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        printf("%d ", i);
        printf("%d\n",arr[len][col]);
        sum += arr[len][col];
    }
    // printf("%d", sum);
    return sum;
}

int main()
{
    int a;
    scanf("%d", &a);
    int arr[a][a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    verti(arr, a, 0);
}
