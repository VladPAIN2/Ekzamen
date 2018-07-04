#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define N 100

void rev(char *s){
char *p=s;
char c;
if(!s)
 return;
while(*p) p++; p--;
while(p>s){
c=*p;
*p--=*s;
*s++=c;
}
}

int main(){
char arr[N];
char* s1;
char* arr_of_sent[N];
char c;
int i=0;
while((c=getchar())!='\n'){
if(!isdigit(c)){
arr[i++]=toupper(c);
}
}
i=0;
s1=strtok(arr, " ");
while(s1!=NULL){
arr_of_sent[i++]=s1;
s1=strtok(NULL, " ");
}

for(int j=0; j<i;j++){
rev(arr_of_sent[j]);
printf("%s ", arr_of_sent[j]);
}
return 0;
}
