#include <stdio.h>

typedef struct student{
	int age;
	int sID;
	int deptID;       //4바이트로 계산
	struct student *link;  //8바이트로 계산해서 12바이트가 나오지만 8바이트가 두칸으로 읽어버림 그래서 하나 4바이트칸이 pad해버림 그래서 16바이트가 나옴   char a 하나면 나오면 1바이트로 읽음
}stu

int main(int argc, int* argv[]){

