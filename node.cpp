#include<stdio.h>
#include<stdlib.h>


typedef struct node {
	int data;
	struct node* next;
} Node;

Node* createNode() {
	Node *newNode = (Node*)malloc(sizeof(Node));

	int num;
	printf("숫자 입력:");
	scanf("%d", &num);
	newNode->data = num;
	newNode->next = NULL;

	return newNode;

}
void appendNode(Node** head) {
	Node* newNode = createNode();
	if (*head == NULL) {
		*head = newNode;
		return;
	}

	Node* temp = *head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = newNode;
}

int main() {

	Node* head =NULL;

	appendNode(&head);
	appendNode(&head);
	appendNode(&head);
	head = createNode();
	head->next = createNode();
	head->next->next= createNode();
	
	head = (Node*)malloc(sizeof(Node));

	head= (Node*)malloc(sizeof(Node)); //가리키는곳이 헤드

	head->data = 10;

	head->next= (Node*)malloc(sizeof(Node));
	head->next->data = 20;

	head->next->next = (Node*)malloc(sizeof(Node));
	head->next->next->data = 30;
	head->next->next->next = NULL;
	printf("%d %d", head->data, head->next->data);

	Node* horse;
	horse = head;

	while (horse != NULL) {
		printf("%d->", horse->data);
		horse = horse->next;
	}



	return 0;



}
