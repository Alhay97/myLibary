#include "linkedList.h"

int main(int arc, char **arv)
{

	s_node *alhai;
	alhai = NULL;
	int ab = INT_MAX;
	int bc = INT_MIN;

	add_beginning(&alhai, 21);
	add_end(&alhai, 22);
	add_end(&alhai, 143);
	add_end(&alhai,211231);

	PrintLLS(alhai);
	printf("\n \n");
	printf("max-> %d\n",ab);
	printf("max-> %d",bc);
	printf("\n \n");
}
