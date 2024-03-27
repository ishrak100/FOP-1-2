#include <stdio.h>
int sum(int n, int s)

{
    if (n != 0)
    {
        int r = n % 10;
        s = s + r;
        n=n/10;
        sum(n, s);
    }
    else
        return s;
}
int main()
{
    int n;
    int s=0;
    scanf("%d", &n);
    printf("%d", sum(n, s));
    return 0;
}