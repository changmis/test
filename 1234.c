#include <stdio.h>
#include <stdlib.h>

int i=0;

int io(int n){
	if(n==1){
		return i;
	}
	if(n%2==1){
		i++;
		return io(n/3);
	}

	else{
		i++;
		return io(n/2);
	}
}
int main(void)
{
	int i = 0;

	scanf("%d",&i);

	printf("%d\n",io(i));

	return 0;
}

