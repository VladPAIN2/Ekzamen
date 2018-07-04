#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Laptop{
char brand[30];
char processor[30];
unsigned int ram;
double weight;
}Laptop;

int comporator(const void* a, const void* b){
if(strcmp(((Laptop*)a)->brand,((Laptop*)b)->brand)==0){
	char str1[30], str2[30];
	sprintf(str1, "%lf", ((Laptop*)a)->weight);
	sprintf(str2, "%lf", ((Laptop*)b)->weight);
	return strcmp(str1, str2);
	}
return strcmp(((Laptop*)a)->brand,((Laptop*)b)->brand);
}

int main(){
int size;
scanf("%d\n",&size);
Laptop laptops[size];
int i=0;
while(i<size){
	scanf("%s %s %d %lf", laptops[i].brand, laptops[i].processor,&laptops[i].ram, &laptops[i].weight);
	i++;
	}
qsort(&laptops, size, sizeof(Laptop), comporator);
for(int i=0; i<size; i++){
	printf("%s %s %d %f ",laptops[i].brand, laptops[i].processor,laptops[i].ram, laptops[i].weight);
	}
}
