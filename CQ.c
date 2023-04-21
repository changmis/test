#include <stdio.h>
#include <stdlib.h>

struct student{
	int age;
	int sid;
	struct student *next;
};

int main(int argc, char* argv[]){

	int numstu = 0;
	scanf("%d",&numstu);


	struct student stu* = (struct student*) malloc( sizeof(struct student) * numstu);
	for(int i = 0; i < numstu; i++){
		stu[i].age = 10;
		stu[i].sid = i;
		}
	for(int i = 0; i <3; i++){
		printf("stu[%d] age = %d. sid = %d\n" i, stu[i].age, stu[i].sid);
	}

	free(stu);

	return 0;
}
