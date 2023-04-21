#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[20];
	int student_id;
	char major[20];
	double gpa;
};

int main(){
	struct student *s= (struct student *)malloc(sizeof(struct student));

	if (s == NULL){
		printf("동적 메모리 할당에 실패하였습니다.");
		return 1;
	}

	printf("학생 이름을 입력하세요:");
	scanf("%s",s->name);
	printf("학번을 입력하세요:");
	scanf("%d", &s->student_id);
	printf("전공을 입력하세요:");
	scanf("%s",s->major);
	printf("평점을 입력하세요:");
	scanf("%lf", &s->gpa);

	printf("학생 정보: 이름=%s,학번=%d, 전공=%s, 평점=%.2f", s->name, s->student_id, s->major, s->gpa);

	free(s);

	return 0;
}
