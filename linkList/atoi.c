#include "linkedList.h"


void  check_sum(const char *str, unsigned long num, int sign)
{
	if (num > 2147483647)
		exit (1);
	else if (num > -2147483648 && sign == -1 )
		exit(1);
	else if(*str)
		exit (1);
}


int	ft_atoi(const char *str)
{
	unsigned long num;
	int sign;

	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		num = num * 10 + *str -'0';
		str++;
	}
	check_sum(str, num, sign);
	return (num * sign);
}
