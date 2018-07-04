#include <stdio.h>
#include <string.h>
#define N 100

int main(){
char str[N];
scanf("%s", str);
int len=strlen(str);
int i=0;
while(i<len){
 printf("%c", str[i]);
 i+=2;
}
i=1;
while(i<len){
 printf("%c", str[i]);
 i+=2;
}
}

