#include <stdio.h>

int f(int n){
	if(n==1) return 1;
	if(n==2) return 2;
	return (f(n-1) *f(n-2))%100;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n",f(n));
	return 0;
}

