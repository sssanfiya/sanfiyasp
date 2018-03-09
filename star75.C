#include<stdio.h>
#include<string.h>
int main()
{
char a[10];
int n,d,i;
printf("\n enter the string:");
scanf("%s",a);
n=strlen(a);
d=n%2;
i=n/2;
if(d==0)
{
a[i]='*';
a[i-1]='*';
printf("%s",a);
}
else
{
a[i]='*';
printf("%s",a);
}
return 0;
}
