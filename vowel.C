#include<stdio.h>
int main()
{
char a[20];
int i;
printf("\n enter the string:");
scanf("%s",a);
for(i=0;i<20;i++)
{
 if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
 {
 count=1;
 }
 else
  {
   printf("no");
  }
  }
  if(count==1)
  {
    printf("yes");
   }

return 0;
}
