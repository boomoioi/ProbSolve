#include <stdio.h>

int main(){
    float first, res, interest;
    int day;
    printf("Enter principle : ");
    scanf("%f", &first);   
    printf("Enter interest(\%) : ");
    scanf("%f", &interest);
    printf("Enter days : ");
    scanf("%d", &day);
    interest = (interest/100)+1;
    res = first;
    for(int i=0; i<day/90; i++){
        res = res*interest;
    }
    printf("Principle and interest is : %.2f", res);
    return 0;
}