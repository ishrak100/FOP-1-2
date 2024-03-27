#include <stdio.h>
int main()
{
    char s[1000];
    scanf("%10[^\n]%*[^\n]", s);
}