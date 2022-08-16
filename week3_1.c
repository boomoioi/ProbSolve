#include <stdio.h>


int main()
{
    int num, temp;
    scanf("%d", &num);
    while (num >= 10)
    {
        temp = 1;
        for (int i = 0; i < 3; i++)
        {
            temp *= num%10;
            num /= 10;

        }            
        num = temp;
    }
    printf("%d", num);
    return 0;
}