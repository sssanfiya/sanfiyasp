#include<stdio.h>
#include<string.h>
int main()
{
char a[20],s[20];
  int b;
printf("\n enter the string:");
scanf("%s",a);
strcpy(s,a);
strrev(s);
b=strcmp(a,s);
if(b==0)
{
printf("\n the string are palindrome");
}
else
{
printf("\n the string is not a palindrome");
}
  return 0;
}
