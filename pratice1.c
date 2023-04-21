#include <stdio.h>
#include <stdlib.h>

int main(){
	int size = 5;
	int *arr = (int*)malloc(size*sizeof(int));

	printf("정수 5개를 입력하세요:");
	for(int i=0; i< size; i++){
		scanf("%d",&arr[i]);
	}

	printf("입력한 정수는 다음과 같습니다:");
	for(int i= 0; i < size; i++){
		printf("%d", arr[i]);
	}

	free(arr);

	return 0;
}

