#include <stdio.h>
void main()
{
    int i, f = 1, s = 0, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        f = f * i;
        s = s + i * f;
    }
    printf("%d", s);
}