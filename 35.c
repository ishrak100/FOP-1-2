
#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    int key = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            key = 0;
    }
    return key;
}

void twinPrime(int N)
{
    for (int num = 3; num < (N - 2); num += 2)
    {
        if (isPrime(num) && isPrime(num + 2))
        {
            printf("(%d, %d)\n", num, num + 2);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    twinPrime(n);
    return 0;
}