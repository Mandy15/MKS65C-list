#include <stdio.h>

int main(){
	printf("Print list:\n");
	print_list();
	printf("Add new node to beginning:\n");
	print_list(insert_front());
	printf("Free list:\n");
	print_list(free_list());
	return 0;
}
