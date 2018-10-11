#include <stdio.h>
#include "list.h"

int main(){
	struct node *list = NULL;

	printf("Print list:\n");
	print_list(list);

	printf("Add new node to beginning:\n");
	print_list(insert_front(list, "hey"));

	// printf("Free list:\n");
	// print_list(free_list(list));
	return 0;
}
