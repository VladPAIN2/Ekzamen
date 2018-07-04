#include <stdio.h>
#include <string.h>
int main()
{
int i=0;;
int flag=0;
char a[40][50];
char b[40][50];
scanf("%s",a[0]);
if(strcmp(a[i],"ugabuga")!=0)
 {
 scanf("%s",b[0]);
 }
else
 flag=1;
i=1;
while(flag==0)
 {
 scanf("%s",a[i]);
 if(strcmp(a[i],"ugabuga")!=0)
  {
  scanf("%s",b[i]);
  }
 else
  flag=1;
 i++;
 }
int n=i;
char str[100];
fgets(str,100,stdin);
fgets(str,100,stdin);
*(strstr(str,"\n"))=0;
int k=strlen(str);
i=0;
while(i<k)
 {
 if(str[i]>64 && str[i]<91)
  str[i]=str[i]+32;
 i++;
 }
printf("%s\n",str);
char * pch = strtok (str," ");
  while (pch != NULL)
  {
      i=0;
      flag=0;
      while(i<n)
       {
       if(strcmp(a[i],pch)==0)
        {
        printf("%s ",b[i]);
        i=n;
        flag=1;
        }
       else
        i++;
       }
      if(flag==0)
       printf("<unknown> ");
      pch = strtok (NULL, " ");
  }
}
