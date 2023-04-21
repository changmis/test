#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student{
	char *name;
	int age;
	int sid;
	struct student *next;
}student;

student* alloc_new_student(char *name,int age, int sid){
	student *stu = (student*)malloc(sizeof(student));
	stu->name = (char*)malloc(sizeof(char)+1);
	strcpy(stu->name, name);
	stu->age = age;
	stu->sid = sid;
	stu->next = NULL;
	return stu;
}

void print_student(student* stu){
	printf("name : %s,age :%d, sid: %d",stu->name, stu->age, stu->sid);
}
void print_student_list(student* head){
	for(student* curr = head; curr != NULL; curr = curr->next)
		print_student(curr);
}

void add_new_student(student *head,char *name, int age, int sid){
	
	student* curr = head;

	if (curr == NULL){
		head = alloc_new_student(name,age,sid);
	}
	for(    ; curr->next != NULL; curr = curr->next);
		curr->next = alloc_new_student(name,age,sid);
}
int main(int argc, char* argv[]){

	student *s1 = alloc_new_student("minsu",100,100);
	add_new_student(s1,"jung", 200, 200);
	add_new_student(s1,"Jangu", 300, 300);
	add_new_student(s1,"James", 400, 400);

	print_student_list(s1);

	free(s1);

	return 0;
}
