#include <stdio.h>

long long pow_(int a, int n)
{
    int ans = 1;
    while (n > 0)
    {
        int last_bit = n & 1;
        if (last_bit)
        {
            ans = ans * a;
        }
        a = a * a;
        n = n >> 1;
    }
    return ans;
}

int main()
{
    int base, pow;
    scanf("%d", &base);
    scanf("%d", &pow);
    printf("%lld", pow_(base, pow));
    return 0;
}