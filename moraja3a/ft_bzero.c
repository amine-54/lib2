#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	i = 0;
	while(i < n)
	{
		tmp[i] = 0;
		i++;
	}
}
/*
 #include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;

	i = 0;
	//ptr = (unsigned char *)s;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}
*/
int main()
{
	char buffer[] = "amine";
	char buffer2[] = "amine";

	ft_bzero(buffer, 1);
	bzero(buffer2, (0));
	printf("%s\n", buffer + 1);
	printf("%s", buffer2);
}
