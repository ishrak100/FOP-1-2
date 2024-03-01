#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int z_in[n];
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            z_in[count] = i;
            count++;
        }
    }
    for (i = 0; i < count; i++)
    {
        a[z_in[i]] = 0;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}