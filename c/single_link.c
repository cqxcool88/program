#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node * next;
};

struct node *my_node;

struct node *node_insert(struct node * node, int data)
{

}

int main()
{
	struct node *link;
	my_node = (struct node *)malloc(sizeof(struct node));
	if(my_node == NULL){
		return 1;
	}
	my_node->data = 1;
	my_node->next = NULL;

	printf("%d\r\n", my_node->data);
}

