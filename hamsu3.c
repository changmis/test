#include <stdio.h>
#include <stdlib.h>

int GetSum(int begin, int end){
	int sum = 0;
	int *array = (int*)malloc(sizeof(int)*10); //포인터 array에 동적할당
	for(int i = 0; i < end; i++){             //array에 1~10까지 저장
		array[i] = begin + i; 
	}
	for (int i = 0; i <end; i++){            //sum에 1~10까지 더함
		sum = sum + array[i];                 //sum에 더한 값 저장
	}
	free(array);                            //동적할당 해제
	return sum;
}

int main(int argc, char* argv[]){
	
	int sum = GetSum(1,10);
	printf("num = %d\n",sum);
	return 0;
}
