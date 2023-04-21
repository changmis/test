#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[20];
	int score;
};
int main(){
int n;
printf("학생 수 입력:");
scanf("%d",&n);

struct student *arr = (struct student*) malloc(n * sizeof(struct student));

for (int i = 0; i < n; i++){
	printf("%d번째 학생이름:", i + 1);
	scanf("%s", arr[i].name);

	printf("%d번째 학생 성적:", i + 1);
	scanf("%d",&arr[i].score);
}

for(int i = n-1; i >= 0; i--){
	for(int j = 0; j< i; j++){
		if(arr[j].score<arr[j+1].score){
			struct student temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
		}
	}
}

printf("\n성적순으로 정렬된 학생 정보:\n");

for (int i = 0; i < n; i++){
	printf("이름:%s, 성적: %d\n", arr[i].name, arr[i].score);
}
free(arr);
return 0;
}
