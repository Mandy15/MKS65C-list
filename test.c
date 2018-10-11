#include <stdio.h>
#include "list.h"

int main(){
	struct node *head = NULL;

	printf("Print empty list:\n");
	print_list(head);

	printf("\nAdd new node to beginning:\n");
	head = insert_front(head, "hello");
	print_list(head);

	printf("\nAdd a second new node to beginning:\n");
	head = insert_front(head, "hey");
	print_list(head);

	printf("\nAdd a third new node to beginning:\n");
	head = insert_front(head, "hi");
	print_list(head);

	printf("\nFree list:\n");
	print_list(free_list(head));

	return 0;
}
