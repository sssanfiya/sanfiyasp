#include<stdio.h>
int main()
{
int h1,h2,m1,m2,h,m;
printf("enter the first time:");
scanf("%d%d",&h1,&m1);
printf("\n enter the second time:");
scanf("%d%d",&h2,&m2);
h=h1-h2;
m=m1-m2;
printf("\n %d:%d",h,m);
return 0;
}
