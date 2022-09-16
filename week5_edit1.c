#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[100];
    char s[] = "", t;
    int l = 0, n = 0;
    scanf("%s", str);

 
    n = strlen(s);
    for (int i = 0; i <= n / 2; i++) {
        t = s[i];
        s[i] = s[n];
        s[n--] = t;
    }
 
    if (!strcmp(str, s) == 0) {
        printf("Not a palindrome");
    }
    else {
        printf("Palindrome");
    }
 
    return 0;
}