#include <stdio.h>

int decimal_binary(int n);

int main()
{
    int no;
    printf("Enter  number : ");
    scanf("%d", &no);
    printf("Binary is : %d", decimal_binary(no));
    return 0;
}

int decimal_binary(int n)
{
    if (n == 0)
        return 0;
    else
        return ((n % 2) + 10 * decimal_binary(n / 2));
}
