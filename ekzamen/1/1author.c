#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Book{
 char name[30];
 char author[30];
 unsigned int pages;
 char isbn[20];
}Book;

int compare(const void* a, const void* b){
 int c;
 if((c=strcmp(((Book*)b)->name, ((Book*)a)->name))!=0){
   return c;
 }
 else if((c=strcmp(((Book*)b)->author, ((Book*)a)->author))!=0){
   return c;
 }
 else{
   return ((Book*)b)->pages-((Book*)a)->pages;
 }
}

int main(){
int N;
scanf("%d", &N);
//Book *array=(Book*)malloc(N*sizeof(Book));
//int i;
Book array[N];
for(int i=0; i<N; i++){
 scanf("%s %s %u %s", array[i].name, array[i].author, &array[i].pages, array[i].isbn);
}
qsort(array, N, sizeof(Book), compare);
for(int i=0; i<N; i++){
 printf("%s %s %u %s ", array[i].name, array[i].author, array[i].pages, array[i].isbn);
}
return 0;
}
