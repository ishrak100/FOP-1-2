#include<stdio.h>
void main()
{
int x,k;

scanf("%d%d",&x,&k);
int i=1;
while(x!=0)

{
 int r=x%10;
 if(i==k)
 {
 if(r%2==0)

   printf("%d EVEN",r);

 else printf("%d ODD",r);


 }
 i++;

 x=x/10;

}
 if(x==0 && k==1)


 printf("0 EVEN");


}
