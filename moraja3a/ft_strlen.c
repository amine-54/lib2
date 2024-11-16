#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}
/*
int main()
{
	//printf("%zu", strlen(NULL));
	printf("%zu\n", ft_strlen(NULL));
}*/
