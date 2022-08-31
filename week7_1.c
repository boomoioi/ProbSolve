#include <stdio.h>

int main()
{
    int a, width, timer;
    scanf("%d", &a);
    if(a%2==0){
        width = a-1;
    } else {
        width = a;
    }

    for(int i=0; i<width/2; i++){
        printf("_");
    }
    printf("*");
    for(int i=0; i<width/2; i++){
        printf("_");
    }
    printf("\n");


    for(int i=0; i<a-2; i++){
        for(int j=0; j<width/2-i-1; j++){
            printf("_");
        }
        printf("*");
        printf("\n");
    }


    for(int i=0; i<width/2; i++){
        printf("_");
    }
    printf("*");
    for(int i=0; i<width/2; i++){
        printf("_");
    }
    return 0;
}