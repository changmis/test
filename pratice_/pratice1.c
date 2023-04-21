#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
	int sid;
	char name[10];
	struct Node *next;
}Node;

Node* alloc_new_node(int sid, char name[10]){
	Node *stu = (Node*)malloc(sizeof(Node)); //동적할당
	strcpy(stu->name,name);            //strcpy함수를 사용하여 name에 복사
	stu->sid = sid;       
	stu->next = NULL;
	return stu;
}

void print_node(Node* stu){ //함수를 입력받은 노드를 출력하는 함수
	printf("%d %s", stu->sid,stu->name);//printf함수로 숫자와 이름출력
}

void print_node_list(Node* head){ //연결 리스트의 처음부터 끝까지 모든 노드를 출력하는 함수
	for(Node* curr = head; curr != NULL; curr = curr->next){
		print_node(curr);
}
printf("\n");
}
void add_new_node(Node* head,int sid, char name[10]){//함수 연결리스트에 새로운 노드를 추가하는 함수

	Node* curr = head;

	while(curr->next != NULL){
		curr = curr->next;
}
	curr->next = alloc_new_node(sid,name);
	}

int main(int argc, char* argv[]){

	struct Node *head= alloc_new_node(1,"홍길동");
	add_new_node(head,2,"김길동");
	add_new_node(head,3,"박길동");
	add_new_node(head,4,"이길동");

	print_node_list(head);

	Node* curr = head;
	while(curr != NULL){//free함수를 호출하여 메모리 해제하기 위해 while문을 사용함
		Node* temp = curr;
		curr = curr->next;
		free(temp);
	}


	return 0;
}
