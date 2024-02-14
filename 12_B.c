#include<stdio.h>
void main()
{
int x,y;
scanf("%d%d",&x,&y);

if(x>0 && y>0)
printf("Quadrant-1");

else if(x<0 && y>0)
printf("Quadrant-2");

else if(x<0 && y<0)
printf("Quadrant-3");

else if(x>0 && y<0)
printf("Quadrant-4");

else if((x>0 || x<0)  && y==0)
printf("Axis-X");

else if((y>0 || y<0)  && x==0)
printf("Axis-Y");

else printf("Origin");

}
