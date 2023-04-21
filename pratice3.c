#include <stdio.h>
#include <stdlib.h>

struct student{
	int score;
	char name[20];
};

int main(){
	struct student stu;

	printf("학생 이름:");
	scanf("%s",stu.name);

	printf("학생 성적:");
	scanf("%d",&stu.score);

	return 0;
}

