#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if ((n & (n - 1)) == 0 && n > 0)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
