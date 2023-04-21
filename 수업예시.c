#include <stdio.h>
#include <stdlib.h>
#define MAM_ELEMENTS 10
int main(void){
	int score[MAX_ELEMENTS]= {3,5,6,1,9,0,2,4,7,8,};
int result;
result = sum score(score);
printf("%d",result);

}
int sum_score(int num[]){
	int i, sum = 0;
	for (i=0,i<MAX_ELEMNTS;i++){
		sum= sum + num[i];
		}
	return sum;

