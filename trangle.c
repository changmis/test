#include <stdio.h>

void hall(int n){
	if(n == 1){
			printf("%d",n);
			return;
		}
	if (n % 2 ==0){
	n--;
	}
	hall(n-2);
	printf("%d",n);
	}

void jakk(int n){
	if(n == 2){
		printf("%d",n);
		return;
	}
	if (n % 2 == 1){
		n--;
	}
	jakk(n-2);
	printf("%d",n);
}

int main(){
	int n;
	scanf("%d",&n);
	printf(" ");
	if(n%2==1){
		hall(n);
	}
	else{
		jakk(n);
	}
	return 0;
}

