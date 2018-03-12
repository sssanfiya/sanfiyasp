#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int i,c=0;
printf("\n enter the string:");
gets(a);
for(i=0;a[i]!='\0';i++)
{
  if(a[i]=='.')
  {
  c++;
  }
}
printf("%d",c+1);
return 0;
}
