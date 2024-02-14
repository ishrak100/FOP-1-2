#include<stdio.h>
int main()
{
    int n,a,b,c,d,e;
    while(scanf("%d%d%d%d%d%d",&n,&a,&b,&c,&d,&e)!=EOF)
    {
        int count=0;
        if(n==a)count++;
        if(n==b)count++;
        if(n==c)count++;
        if(n==d)count++;
        if(n==e)count++;

        printf("%d\n",count);
        return 0;



    }












}
















