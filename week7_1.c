#include <stdio.h>
int main() {
    int base, exp;
    long double result = 1.0;
    printf("base pow : ");
    scanf("%d", &base);
    scanf("%d", &exp);

    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("%.0Lf", result);
    return 0;
}