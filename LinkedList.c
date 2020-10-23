#include <stdio.h>

typedef struct _Node
{
	struct Node* next;
	int data;
}Node;

int main() {
	Node* head = malloc(sizeof(Node));
	Node* node1 = malloc(sizeof(Node));
	
	head->next = node1;
	node1->data = 10;

	Node* node2 = malloc(sizeof(Node));
	
	node1->next = node2;
	node2->data = 20;

	Node* curr = head->next;

	while (curr != NULL)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}
	
	free(node1);
	free(node2);
	free(head);
}