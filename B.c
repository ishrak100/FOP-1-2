#include <stdio.h>
int main()
{
    int r, i, k, n;
    scanf("%d%d", &n, &k);
    for (i = 1; i <= k; i++)
    {
        r = n % 10;
        n = n / 10;
    }
    if (r % 2 == 1)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
