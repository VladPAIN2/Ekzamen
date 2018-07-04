#include <stdio.h>
#include <string.h>
int main()
{
char str[70];
char key[10];
scanf("%s",key);
scanf("%s",str);
int i=0;
int k=strlen(key);
int a=0;
int d=strlen(str);
while(i<d)
 {
 str[i]=str[i]-key[a]+97;
 if(str[i]<97)
  str[i]=str[i]+26;
 i++;
 a++;
 if(a==k)
  a=0;
 }
printf("%s",str);
}
