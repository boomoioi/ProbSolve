#include <stdio.h>

int recur(int num);
int main()
{
    int num, temp;
    scanf("%d", &num);

    printf("%d", recur(num));
    return 0;
}

int recur(int num)
{
    int temp=1;
    for (int i = 0; i < 3; i++)
    {
        temp *= num % 10;
        num /= 10;
    }
    if (temp < 10)
    {
        return temp;
    }
    
    return recur(temp);
}