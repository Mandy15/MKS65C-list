struct node { char s[32]; struct node *next;};

void print_list(struct node *n);

struct node * insert_front(struct node *n, char str[32]);

struct node * free_list(struct node *n);
