#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
	int sid;
	char name[10];
	struct Node* next;
};

Node *alloc_new_node(char name,int sid){
 Node stu* =(Node*)(malloc sizeof(Node) 

int main(int argc, char* argv[]{
		struct Node* head = alloc_new_node(1,"홍길동");

		add_new_node(head,2,"김길동");
		add_new_node(head,3,"박길동");
		add_new_node(head,4,"이길동");

		print_node_list(head);

		free()

		return 0;
		}

