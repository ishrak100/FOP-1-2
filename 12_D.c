#include<stdio.h>
void main()
{
 int b,h,m;
 double Ati,At;

 scanf("%d%d%d",&b,&h,&m);

 if((b*0.5>=h) && (m*12)>60000)
   Ati=((double)b*12)+((m*12)-60000);

 else if((b*0.5<h) && (m*12)<=60000)
    Ati=((double)b*12)+(12*(h-(b*0.5)));

else if((b*0.5<h) && (m*12)>60000)
    Ati=((double)b*12)+(12*(h-(b*0.5)))+((m*12)-60000);

 else Ati=b*12;

 if(Ati<=200000)
   At=0.00;

   else if(Ati<=300000)
 At=(300000-Ati)*0.1;

 else if(Ati<=800000)
 At=(100000*0.1)+(Ati-300000)*0.15;

 else if(Ati<=1800000)
 At=(100000*0.1)+(500000)*0.15+(Ati-800000)*0.2;

else if(Ati<=4800000)
 At=(100000*0.1)+(500000)*0.15+(1000000)*0.2+(Ati-1800000)*0.25;

 else if(Ati>4800000)
 At=(100000*0.1)+(500000)*0.15+(1000000)*0.2+(3000000)*0.25+(Ati-4800000)*0.3;



 printf("Annual Taxable Income: %0.2lf\nAnnual Tax: %0.2lf",Ati,At);




}
