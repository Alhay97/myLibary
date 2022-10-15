#include <unistd.h>
#include <stdio.h>

void ft_putchar(int c)
{
	write(1,&c,1);
}

size_t ft_strlen(const char *s)
{
	size_t i;
	i = 0;
	while(s[i] != '\0')
		i++;
	return (i);
}

void ft_putnum(int num)
{
	if( num >= 10)
	{
		ft_putnum(num / 10);
		num = num % 10;
	}
	if (num < 10)
		ft_putchar(num +48);

}

int ft_atoi(const char *str)
{
	unsigned long num;
	// int i = 0 ;
	int negative;

	num = 0;
	negative = 1;

	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative *= -1;
		str++;
	}
	while (*str == 32 || (*str >= '0' && *str <= '9'))
	{
		num  = num * 10 + (*str) - '0';
		str++;
	}
	return (negative * num);
}

void remove_duplicate(char *str)
{
	int i = 0;
	int j;
	int k;

	while(i < ft_strlen(str))
  	{
  		j = i + 1;
  		while(str[j] != '\0')
  		{
  			if(str[j] == str[i])
			{
				k = j;
  				while(str[k] != '\0')
				{
					str[k] = str[k + 1];
					k++;
				}
 			}
 			j++;
		}
		i++;
	}
}


int digit_counter(int digit)
{
	int i = 0;
	while (digit != 0)
	{
		digit = digit / 10;
		i++;
	}
	return (i);
}

//strchr

//strcmp

//strdup

//strdup

int main()
{

	// int ab = ft_atoi("124563ab");
	char ab[] = "aallhhyy";
	int ac = digit_counter(4542315);
	remove_duplicate(ab);
	printf("%s, %d",ab, ac);
	return 0;
}
