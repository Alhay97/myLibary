#include "linkedList.h"

void travelLLS(s_node *alhai)
{
	while (alhai != NULL)
		alhai =	alhai->next;
}


void PrintLLS(s_node *alhai)
{
	while (alhai != NULL)
	{
		printf("%d \n",alhai->var);
		alhai =	alhai->next;
	}
}

