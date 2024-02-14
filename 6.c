#include <stdio.h>
void main()
{
    int a, b, i;
    scanf("%d %d", &a, &b);
    for (i = 0; b > a + i; i++)
    {

        b = b - (a + i);
    }

    printf("%d", a + i);
}