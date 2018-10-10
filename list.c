#include <stdio.h>
#include <list.h>

struct node { char s[32]; struct node *next };

void print_list(struct node * n){
	printf("%s\n", n.s);
	while(n.next != null){
		n = n.next;
		printf("%s\n", n.s);
	}
}

struct node * insert_front(struct node * n, char){
	struct node *x = malloc(32);
	x.s = char;
	x.next = n;
	return x;
}

struct node * free_list(struct node * n){
	while(n.next != null){
		n = n.next;
	}else{
		free(n.next);
	}
	return ;
}
