#include <stdio.h>
int main()
{
    int i, last_ele, n;
    //int x[n];
    scanf("%d", &n);
    int x[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    last_ele = x[0];
    printf("%d ", x[0]);
    for (i = 1; i < n; i++)
    {
        if (last_ele != x[i])
        {
            printf("%d ", x[i]);
            last_ele =x[i];
        }
    }
    return 0;
}
