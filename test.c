#include <stdio.h>

int main(){
    int a;
    int x=2;
    scanf("%d",&a);
    while (a!=1)
    {
        while (a%x==0)
        {
            if(a/x == 1){
                printf("%d", x);
                return 0;
            }
            printf("%d * ",x);
            a = a/x;
        }
        x++;    
    }
    return 0;
}