#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Laptop{
 char brand[30];
 char processor[30];
 unsigned int ram;
 double weight;
}Laptop;

int compare(const void* a, const void* b){
 if(strcmp(((Laptop*)a)->brand,((Laptop*)b)->brand)==0)
 {
 char str1[10];
 char str2[10];
 sprintf(str1, "%lf", ((Laptop*)a)->weight);
 sprintf(str2, "%lf", ((Laptop*)b)->weight);
 return strcmp(str1, str2);
 }
return strcmp(((Laptop*)a)->brand, ((Laptop*)b)->brand);
}

int main(){
int size;
scanf("%d\n", &size);
Laptop some_laptop[size];
int i=0;
while(i<size){
 scanf("%s %s %u %lf", some_laptop[i].brand, some_laptop[i].processor, &some_laptop[i].ram, &some_laptop[i].weight);
 i++;
}
qsort(&some_laptop, size, sizeof(Laptop), compare);

for(int i=0; i<size; i++){
 printf("%s %s %u %f ", some_laptop[i].brand, some_laptop[i].processor, some_laptop[i].ram, some_laptop[i].weight);
}
return 0;
}
