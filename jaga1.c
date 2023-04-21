#include <stdio.h>

void func(int n){
	if (n <= 0){
		return;
	}
	printf("recursive\n");
	func(n-1);
}
int main(){
	int n;
	printf(" ");
	scanf("%d",&n);
	func(n);
	return 0;
}
