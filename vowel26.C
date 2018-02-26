#include<stdio.h>
int main()
{
char a[10];
int i;
printf("\n enter the string:");
scanf("%s",a);
for(i=0;i<10;i++)
{
 if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='I'||a[i]=='O'||a[i]=='E'||a[i]=='U')
 {
 printf("\n yes");
 return 0;
 }
}
printf("\n no");
return 0;
}
