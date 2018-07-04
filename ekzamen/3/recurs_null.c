#include <stdio.h>

int count1(int flag,int count)
{
int b;
scanf("%d",&b);
if(b==0)
 {
 if(flag==1)
  return count;
 flag++;
 }
if(b!=0)
 flag=0;
if(b==1)
 count++;
count=count1(flag,count);
}

int main()
{
int a=0;
a=count1(0,a);
printf("\n[%d]",a);
}
