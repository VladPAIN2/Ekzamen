#include <stdio.h>
#include <string.h>
int test(char* arr, int a, int b)
{
if (a>=b){
return 1;
}
if(arr[a] == arr[b]){
test(arr, a+1, b-1);
} else return 0;
}
int main ()
{
char word[1000];
fgets(word, 1000, stdin);
if(test(word, 0, strlen(word)-2)){
printf("YES");
} else printf("NO");
return 0;
}
