#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 20

void add_char(void* a, const void* b){
 int c=(int)*(char*)b;
 *(int*)a=*(int*)a+c;
}

void add_int(void* a, const void* b){
 *(int*)a=*(int*)a+*(int*)b;
}

void universalSum(void* base, size_t num, size_t size, void* init, void (*add)(void*, const void*)){
for(int i=0; i<num; i++){
 add(init, base);
 base=base+size;
}
}


int main(){
int size;
scanf("%d", &size);
getchar();
char array_char[N];
int array_int[N];
int sum=0;
switch(size){

 case 1:
  for(int i=0; i<N; i++){
     scanf("%c ", &array_char[i]);
  }
  universalSum(array_char, N, size, &sum, add_char);
  printf("\n%d\n", sum);
  break;

 case 4:
  for(int i=0; i<N; i++){
     scanf("%d ", &array_int[i]);
  }
  universalSum(array_int, N, size, &sum, add_int);
  printf("/n%d\n", sum);
  break;

}
}
