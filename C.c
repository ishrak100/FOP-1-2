#include <stdio.h>
int main()
{
    int n, r, digit = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 16;
        n = n / 16;
        if (r != 0)
            digit++;
    }
    printf("%d\n", digit);
}