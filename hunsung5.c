#include <stdio.h>

int dc(int n, int level){
	if(n==1){
		return count;
	}
	else if(n%2==0){
		return dc(n/2, level +1);
	}
	else{
		return dc(n/3, level +1);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", dc(n,0));
	return 0;
}

