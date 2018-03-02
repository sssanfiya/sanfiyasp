#include<stdio.h>
int main()
{
int n,k;
int b[100];
printf("\n enter the value of n and k:");
scanf("%d%d",&n,&k);
printf("\n enter the values:");
scanf("%d",&b);
for(i=o;i<=n;i++)
{
 if(b[i]==k)
 {
 printf("yes");
 return 0;
 }
 else
 {
 printf("no");
 return 0;
 }
}
return 0;
