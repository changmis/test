#include <stdio.h>

void fill_array(int list[3][4]){
	for(int i = 0; i< 3; i++)
	 list[i] = 1;	
}

void print_array(int list[3][4]){
	for(int i = 0; i<3; i ++)
		printf("%d",list[i]);

}

int main(int argc, int *argv[]){
	int list[3][4];

	fill_array(list);
	print_array(list);
	return 0;
}

