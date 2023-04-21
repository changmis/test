#include <stdio.h>
#include <stdlib.h>
#define MAX_NAME_LEN 20

typedef struct person{
	char name[20];
	int height;
	int weight;

}Person;

int main(){
	Person people[5];
	for(int i = 0; i < 5; i++){
		printf("
