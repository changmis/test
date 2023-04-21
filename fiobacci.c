#include <stdio.h>

int fibonacci(int n);

int main(){
	int n;

	for(int n=0; n<11; n++){
		printf("f(%d) =%d\n",n,fibonacci(n));
	}
	return 0;
}

int fibonacci(int n){
	if(n==1)
		return 1;
	else if(n==0)
		return 0;
	else
		return fibonacci(n-1) + fibonacci(n-2);
}

