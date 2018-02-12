#include<stdio.h>
int main()
{
int num,d,sum;
printf("\n enter the digits:");
scanf("%d",&num);
while(num!=0)
{
d=num%10;
num=num/10;
sum=sum+d;
}
printf("\n sum is :%d",sum);
return 0;
}
