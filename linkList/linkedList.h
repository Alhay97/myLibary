#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

typedef struct t_node
{
	int var;
	struct t_node *next;
}	s_node;

void travelLLS(s_node *alhai);

void PrintLLS(s_node *alhai);

void add_beginning(s_node  **p, int ab);

void add_end(s_node  **p, int ab);

int	ft_atoi(const char *str);

void  check_sum(const char *str, unsigned long num, int sign);


#endif
