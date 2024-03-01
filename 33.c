#include<stdio.h>
int main()
{
int n;
scanf("%d", &n);
long long int sum = 0;
long long int factorial = 1;
for(int i = 1; i<=n; i++)
{
factorial = (factorial * i) % 1000000007;
sum = (sum + (i * factorial) % 1000000007) % 1000000007;
}
printf("%lld\n", sum);
}