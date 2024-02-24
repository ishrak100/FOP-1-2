#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    int s1 = 0, s2 = 0;

    for (i = 0; i < n; i = i + 2)
    {
        s1 = s1 + x[i];
    }
    for (i = 1; i < n; i = i + 2)
    {
        s2 = s2 + x[i];
    }
    if (s1 > s2)
    {
        printf("%d", s1 - s2);
    }
    else if (s1 < s2)
    {
        printf("%d", s2 - s1);
    }
    return 0;
}