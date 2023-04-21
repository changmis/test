#include <stdio.h>
#include <stdlib.h>

int main(){
	char* Alpha=(char*)malloc(10* sizeof(char));

	printf(" ");
	scanf("%s",Alpha);

	printf("%c",Alpha[0]);
	printf("%c",Alpha[3]);
	printf("%c",Alpha[6]);

	free(Alpha);

	return 0;
}

