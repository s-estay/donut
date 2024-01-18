
// Linked List is a linear data structure,
// in which elements are not stored at a contiguous location,
// rather they are linked using pointers.
// Linked List forms a series of connected nodes,
// where each node stores the data and the address of the next node.

// A node in a linked list typically consists of two components:
// Data: It holds the actual value or data associated with the node.
// Next Pointer: It stores the memory address (reference) of the next node in the sequence.
// Head: The linked list is accessed through the head node, which points to the first node in the list.
// Tail: The last node in the list points to NULL or nullptr, indicating the end of the list.

https://stackoverflow.com/questions/74325343/how-to-deallocate-the-linked-list
https://www.tutorialspoint.com/data_structures_algorithms/linked_list_program_in_c.htm


#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
};

struct node* head = NULL;
struct node* current = NULL;

void print_list()
{
	struct node* p = head;

	while (p != NULL)
	{
		printf("%d", p->data);
		p = p->next;
	}
}

int insert_at_beginning(int data)
{
	struct node* link = (struct node*) malloc(sizeof(struct node));

	if (link == NULL)
	{
		printf("malloc failed\n");
		return -1;
	}

	link->data = data;
	link->next = head; // point to previous first node

	head = link; // point head to new first node

	return 0;
}

int main()
{
	if (!insert_at_beginning(12))
	{
		print_list();
	}

	return 0;
}