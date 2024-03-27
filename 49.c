#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    int i, j, t;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (x[i] > x[j])
            {
                t = x[i];
                x[i] = x[j];
                x[j] = t;
            }
        }
    }

    int a;
    scanf("%d", &a);
    int beg = 0;
    int end = n - 1;
    int mid;
    int count = 0;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (a == x[mid])
        {
            count = 1;
            break;
        }
        else if (a > x[mid])
        {
            beg = mid + 1;
        }
        else
            end = mid - 1;
    }
    if (count == 1)
    {
        printf("Found");
    }
    else
        printf("Not found");

    return 0;
}
