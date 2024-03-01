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
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (x[i] == x[j] && i!=j)
            {
                count++;
                continue;
            }
        }
        if (count == 0)
        {
            printf("%d", x[i]);
            break;
        }
    }
    return 0;
}