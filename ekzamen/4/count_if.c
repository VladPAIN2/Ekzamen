#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int f_int(const void* a){
 if(*(int*)a%2 == 0)
   return 1;
 else
   return 0;
}

int f_double(const void* a){
long double dc1, cc1;
dc1=modfl(*(double*)a, &cc1);
int c=(int)cc1;
if(dc1==0 && c%2==0){
 return 1;
}
else
 return 0;
}

int count_if(void* base, size_t num, size_t size, int (*pred)(const void*)){
int flag=0;
for(int i=0; i<num; i++){
 if(pred(base)>0){
   flag++;
 }
 base=base+size;
}
printf("%d\n", flag);
}


int main(){
int size;
scanf("%d ", &size);
int array_int[20];
double array_double[20];
switch(size){

 case 4:
 for( int i=0; i<20; i++){
   scanf("%d ", &array_int[i]);
 }
//getchar();
 count_if(array_int, 20, size, f_int);
 break;

 case 8:
 for( int i=0; i<20; i++){
   scanf("%lf ", &array_double[i]);
 }
 count_if(array_double, 20, size, f_double);
 break;

 default: printf("Error\n");
 return 0;
}
}

