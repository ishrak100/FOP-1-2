
#include <stdio.h>

long long int factorial(int n)
{
    long long int fact=1,i;
    for(i=1; i<=n; i++)
    {
        fact=fact*i;

    }
    return fact;

}

long long int permutation(int N, int R)
{
    long long int totalPermutation;
    totalPermutation=factorial(N)/((factorial(R))*(factorial(N-R)));
    return totalPermutation;
}

int main()
{
    int N, R;
    scanf("%d%d", &N,&R);
    printf("%lld\n", permutation(N, R));
    return 0;
}