#include <stdio.h>
void main()
{
    int n, i, j;
    int x[32];
    scanf("%d", &n);
    for (i = 0; n != 0; i++)
    {
        x[i] = n % 2;
        n = n / 2;
    }
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", x[j]);
    }
}