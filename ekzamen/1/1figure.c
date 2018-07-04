#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Figure{
char name[30];
int x;
int y;
}Figure;

int compar1(const void* val2,const void* val1){
int a;
if((((Figure*)val1)->x > ((Figure*)val2)->x)){
return -1;
}
if((((Figure*)val1)->x < ((Figure*)val2)->x)){
return 1;
}

else{
if((((Figure*)val1)->y > ((Figure*)val2)->y)){
return -1;
}
if((((Figure*)val1)->y > ((Figure*)val2)->y)){
return 1;
}
else return 0;
}
}

int main(){
int N;
scanf("%d",&N);
Figure *array=(Figure*)malloc(N*sizeof(Figure));
int i;
for(i=0;i<N;i++){
scanf("%s",array[i].name);
scanf("%d",&array[i].x);
scanf("%d",&array[i].y);
}
qsort(array,N,sizeof(Figure),compar1);
for(i=0;i<N;i++){
printf("%s %d %d ",array[i].name,array[i].x,array[i].y);
}
return 0;
}
