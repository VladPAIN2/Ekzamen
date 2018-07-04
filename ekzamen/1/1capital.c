#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Country{
char name[30];
unsigned int population;
char capital[30];
}Country;

int comparator(const void* a, const void* b){
if(strcmp(((Country*)a)->name,((Country*)b)->name)==0){
	return strcmp(((Country*)a)->capital,((Country*)b)->capital);
	}
 return strcmp(((Country*)a)->name,((Country*)b)->name);
}


int main(){
int size;
scanf("%d\n",&size);
Country some_country[size];
int i=0;
while(i<size){
 scanf("%s %d %s", some_country[i].name, &some_country[i].population, some_country[i].capital);
 i++;
}
qsort(&some_country, size, sizeof(Country), comparator);

for(i=0; i<size; i++){
printf("%s %d %s ", some_country[i].name, some_country[i].population, some_country[i].capital);
}
return 0;
}
