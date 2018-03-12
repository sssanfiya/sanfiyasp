#include<stdio.h>
#include<string.h>
int main()
{
char a[20];
int i,count=0;
printf("\n enter the string:");
gets(a);
for(i=0;a[i]!='\0';i++)
{
   if(a[i]==' ')
   {
   count++;
   }
}
printf("%d",count);
return 0;
}
