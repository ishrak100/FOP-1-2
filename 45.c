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
    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }
    return 0;
}
