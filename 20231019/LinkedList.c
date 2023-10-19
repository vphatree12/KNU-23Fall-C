#include <stdio.h>
#include <stdlib.h>
typedef struct _NODE {
	int data;
	struct _NODE* next;
} NODE;

void print_list(NODE* head) {//노드 프린트 함수
	NODE* p = head->next;
	while (p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
}

void insert_node(NODE* head, int data) {//노드 삽입 함수
	NODE* p = head;
	while (p->next != NULL) {
		p = p->next;
	}
	NODE* new_node = (NODE*)malloc(sizeof(NODE));
	new_node->data = data;
	new_node->next = p->next;
	p->next = new_node;
}

int main() {
	NODE* head = (NODE*)malloc(sizeof(NODE));
	head->next = NULL;	//(*head).next = NULL 과 같다

	NODE* n1 = (NODE*)malloc(sizeof(NODE));
	n1->data = 1;
	n1->next = head->next;
	head->next = n1;

	NODE* n2 = (NODE*)malloc(sizeof(NODE));
	n2->data = 2;
	n2->next = n1->next;
	n1->next = n2;

	NODE* n3 = (NODE*)malloc(sizeof(NODE));
	n3->data = 3;
	n3->next = n2->next;
	n2->next = n3;

	insert_node(head, 5);

	print_list(head);

	return 0;
}