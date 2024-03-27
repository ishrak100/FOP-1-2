#include <stdio.h>
int power(int x, int n, int i, int ans)
{
    if (i <= n)
    {
        ans= ans * x;
        power(x, n, i + 1, ans);
    }
    else return ans;
}
int main()
{
    int x, n;
    //int ans=1;
    //int i=1;
    scanf("%d%d", &x, &n);
    printf("%d", power(x, n, 1, 1));
}