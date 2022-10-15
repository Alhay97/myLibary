#include "linkedList.h"

void add_beginning(s_node  **p, int ab)
{
	s_node *new;
	new  = (s_node *)malloc(sizeof(s_node));
	new -> var = ab;
	new -> next = *p;
	*p = new;
}


void add_end(s_node  **p, int ab)
{
	// this step is to allocate the memory
	s_node *new;
	new = (s_node *)malloc(sizeof(s_node));
	s_node *last = *p;
	//to add data to the element
	new ->var = ab;
	// this make sure that the new node goes to the last node in th linked list
	// so that the next has NULL after it
	new ->next = NULL;
	// if the linked list is empty it create a node
	while (p == NULL)
	{
		*p = new;
		return;
	}
	// travel through the linked list till the end
	travelLLS(last);
	//change the next of the last node
	last -> next = new;
	return;
}


