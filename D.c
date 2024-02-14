#include <stdio.h>
int main()

{
    int n, x = 0;
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &n);
        x = x ^ n;
    }
    printf("%d\n", x);
    return 0;
}
