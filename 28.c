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
    int j, count;
    int p = 0;
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (x[i] == x[j] && i != j)
            {
                count++;
                continue;
            }
        }

        if (count == 0)
        {
            p++;
        }
    }
    printf("%d",p);
    return 0;
}