#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

void PrintArrayQuiz(){
	int array[MAXSIZE] = {0,};  
		for(int i = 0; i < MAXSIZE; i++){  //for문을 써서 배열에 1을계속 더해서 1~10까지 출력하는 과정이다
	array[i] = i + 1;
		}
	for(int i = 0; i < MAXSIZE; i++){
		printf("%d",array[i]);            //그리고 그 값을 출력
	}
	printf("\n");
}

int* DoMallocQuiz(int n){
	int *array = (int*)malloc(sizeof(int)*n);  //동적할당을 하고 for문을 이용해 배열의 각 요소를 2*n으로 초기화함
	for(int i = 0; i < n; i++)
		array[i] =(i+1)*2;

	return array;
			
}

void PrintMallocQuiz(int*array, int n)
{
	for(int i = 0; i< n; i++){    //그리고 PrintMAllocQuiz에는 1~20까지 숫자중에서 2의 배수만 출력되게함
		printf("%d",array[i]);
	}
	printf("\n");
}
int main(int argc, char* argv[]){
	PrintArrayQuiz();
	int *p1 = DoMallocQuiz(10); // PrintMAllocQuiz에 출력값도 필요하니 배열의크기를 10개로 지정
	PrintMallocQuiz(p1,5);
	PrintMallocQuiz(p1,10);


	free(p1); 
	return 0;
}
