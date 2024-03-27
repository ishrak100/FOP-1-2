#include<stdio.h>
int sum(int n,int s,int i)
{
    if (i<=n)
    {   
        s=s+i;
        sum(n,s,i+1);  
    }
   else  return s;
}
int main()
{
    int n;
    int s=0;
    int i=1;
    scanf("%d",&n);
    printf("%d",sum(n,s,i));
    return 0;
}