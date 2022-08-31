#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int a[2];
    scanf("%d", &a[0]);
    scanf("%d", &a[1]);

    qsort(a, 2, sizeof(int), cmpfunc);
    printf("%d", a[1]);
}