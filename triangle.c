#include <stdio.h>

int get_size(){
	printf("크기:"); //printf로 크기값 받아서 입력하는것 출력
	int size = 0;   // int size =0으로 변수값 초기화
	scanf("%d",&size);
	return size;
}

void do_draw_triangle(int size) {
	if (size ==0) return;        // if구문 돌려서 size가 0이면 리턴
	for(int i = 0 ; i < size; i++)  //for구문 돌려서 별찍어내기
		printf("*");
	printf("\n");
	do_draw_triangle(size -1);       //삼각형이라서 size-1해서 점점뻄
}

void draw_triangle(){
	int size = get_size();          
	do_draw_triangle(size);
}

void do_draw_rectangle(int size, int max_width){
	if (size == 0) return;               //이것도 삼각형이랑 똑같음
	for(int i = 0; i < max_width; i++)       
		printf("*");
	printf("\n");                               
	do_draw_rectangle(size -1, max_width); //여기도 왜 size-1? 뒤에 max_width는뭐임
}

void draw_rectangle(){
	int size = get_size();
	do_draw_rectangle(size, size);
}

void show_menu(){
	printf("1. 삼각형그리기\n");
	printf("2. 사각형그리기\n");
	printf("3. 종료\n");
}

int get_user_input(){
	show_menu();
	printf("입력:");
	int input = 0;
	scanf("%d",&input);
	return input;
}

void solve_question(){
	int loop = 1;

	while(loop){
		int input = get_user_input();
		switch(input){              //1,2,3 선택지가 주어진 구문을써서 switch를 쓰는게 더 좋다고 판단한거 같음 
			case 1:
				draw_triangle(); //그래서 case1에는 삼각형 별을 출력
				break;
			case 2:
				draw_rectangle(); //case2에는 사각형 별을 출력
				break;
			case 3:
				loop = 0; //cacse3에는 종료를 출력
				break;
		}
	}

}

int main(int argc, char *argv[]){
	solve_question();
	return 0;
}
