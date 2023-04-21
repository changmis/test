#include <stdio.h>
int array[100];

int main (void){
	int num = 0;
	int n = 0;

	do{
		scanf("%d",&num);
		if(num != 0){
			array[n++] = num;
		}
	}
	while(num != 0 && n<100);
	for( int i = n -1; i>= 0; i--){
		printf("%d\n",array[i]);
	}
	return 0;
}
	
