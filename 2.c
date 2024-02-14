#include<stdio.h>
int main()
{
    long long int a,b;

    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        if(a>b)
        {
            printf("%lld\n",a-b);
        }

        else if(a<b)
            printf("%lld\n",b-a);


    }


}
