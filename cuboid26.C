#include<stdio.h>
int main()
{
float l,b,h,vol,tsa;
printf("\n enter the length breadth and height:");
scanf("%f%f%f",&l,&b,&h);
vol=l*b*h;
tsa=2(l*b)+2(l*h)+2(h*b);
printf("\n volume:%f",vol);
printf("\n total suraface area:%f",tsa);
return 0;
}
