#include <stdio.h>

int divide_count(int n, int count){
	if(n==1){
		return count;
	}
	else if (n % 2 ==0){
		return divide_count(n/2, count+1);
	}
	else{
		return divide_count(n/3, count+1);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",divide_count(n,0));
	return 0;
}

