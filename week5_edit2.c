#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int left, right;
    scanf("%s", s);
    right=strlen(s)-1;
    for(left=0; left<strlen(s)/2; left++){
        if(s[left]  != s[right]){
            printf("Not a palindrome");
            return 0;
        }
        right--;
    }
    printf("Palindrome");
    return 0;
}