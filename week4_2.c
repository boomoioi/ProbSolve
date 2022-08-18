#include <stdio.h>

int main()
{
    int a, b, c, max, min ,mid;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a>=b && a>=c){
        max = a;
        if(b>=c){
            mid = b;
            min = c;
        } else {
            mid = c;
            min = b;
        }
    } else if(b>=a && b>c) {
        max = b;
        if(a>=c){
            mid = a;
            min = c;
        } else {
            mid = c;
            min = a;
        }
    } else {
        max = c;
        if(a>=b){
            mid = a;
            min = b;
        } else {
            mid = b;
            min = a;
        }
    }
    printf("Min : %d\nMid : %d\nMax : %d", min, mid, max);

}