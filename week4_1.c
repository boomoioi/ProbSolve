#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int a[3];
    scanf("%d", &a[0]);
    scanf("%d", &a[1]);
    scanf("%d", &a[2]);

    qsort(a, 3, sizeof(int), cmpfunc);
    printf("Min : %d\nMid : %d\nMax : %d", a[0], a[1], a[2]);
}