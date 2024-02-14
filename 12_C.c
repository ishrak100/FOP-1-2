#include<stdio.h>
void main()
{
int a,b,c,d,temp;
scanf("%d%d%d%d",&a,&b,&c,&d);

if(a>b)
{
temp=a;
a=b;
b=temp;
}


if(a>c)
{
temp=a;
a=c;
c=temp;
}


if(a>d)
{
temp=a;
a=d;
d=temp;
}

if(b>c)
{
temp=b;
b=c;
c=temp;
}


if(b>d)
{
temp=b;
b=d;
d=temp;
}

if(c>d)
{
temp=c;
c=d;
d=temp;
}

printf("%0.3f",((float)b+c)/2);


}
