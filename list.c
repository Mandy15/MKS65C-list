#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

void print_list(struct node *n){
	while(n){
		printf("%s ", n->s);
		n = n->next;
	}
	printf("\n");
}

struct node * insert_front(struct node *n, char str[32]){
	struct node *x = malloc(sizeof(struct node));
	strcpy(x->s, str);
	x->next = n;
	return x;
}

struct node * free_list(struct node *n){
	if(n){
		struct node *x = n->next;
		free(n);
		free_list(x);
	}else{
		return n;
	}
	return NULL;
}
