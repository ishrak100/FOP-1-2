#include <stdio.h>
int main()
{
    int i, last_ele, n;
    // int x[n];
    scanf("%d", &n);
    int x[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    last_ele = x[0];
    int count = 1;
    for (i = 1; i < n; i++)
    {
        if (last_ele != x[i])
        {
            count++;
            last_ele = x[i];
        }
    }
    printf("%d", count);
    return 0;
}
