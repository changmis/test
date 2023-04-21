#include <stdio.h>

void draw_star(int n){     //이중for문을 사용하여 별을 출력하고 줄바꿈
	for(int i=n; i>=1; i--){
		for(int j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
}

int fib(int n){ //피보나치 수열
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;
	return fib(n-1) + fib(n-2);
}


void print_fib(int n){ //피보나치수 프린트
	if (n<0){
		printf("\n");
		return;
	}
	int value;
	value= fib(n);
	printf("%d", value);
	print_fib(n-1);
}

int main(int argc, char* argv[]){
	draw_star(5);
	print_fib(5);

	return 0;
	}
