#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *s)
{
	size_t i;
	i = 0;
	while(s[i] != '\0')
		i++;
	return (i);
}

void ft_putchar(int c)
{
	write(1,&c,1);
}



char *ft_strchr(const char *s, int c)
{
	while (*s )
		if (*s++ == (char)c)
			return((char *)s - 1);
	while (!c)
		return((char *)s); 
	return 0;
}

int ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
		while (++s1 == ++s2)
			return(0);
	return((unsigned char *)s1 - (unsigned char *)s2);
}

char *ft_strdup(const char *s1)
{
	int size;
	int  j = 0;
	char *str2;
	size = ft_strlen(s1);

	str2 = (char *)malloc(1*(size+1));

	if(str2 == 0)
		return(0);
	while(s1[j] != '\0')
	{
		str2[j] = s1[j];
		j++;
	}
	str2[j] = '\0';
	return (str2); 
}


int main()
{
    char source[] = "GeeksForGeeks";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = ft_strdup(source);
 
    printf("%s", target);
    return 0;
}
