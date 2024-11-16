#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*temp;

	temp = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		temp[i] = (unsigned char) c;
		i++;
	}
	return (b);
}

int main()
{
	int a = 0;

	ft_memset(&a, 255, 4);
	ft_memset(&a, 250, 2);
	ft_memset(&a, 199, 1);
	printf("%d", a);

	/*
	int a = 0;
	
	ft_memset(&a, 5, 2);
	ft_memset(&a, 57, 1);
	printf("%d", a);
	*/

	/*
	int a = 0;
	char *p = (char *)&a;
	ft_memset(&a, 255, 4);
	ft_memset(p, 199, 1);
	ft_memset(p+1, 250, 1);
	printf("%d", a);
	*/
	
	/*
	int a = 0;
	char *p = (char *)&a;
	ft_memset(p, 57, 1);
	ft_memset(p+1, 5, 1);
	printf("%d", a);
	*/

	/*
	char *buffer = malloc(4);
	char **p = &buffer;

	ft_memset(*p, 97, 1);
	ft_memset(*p+1, 109, 1);
	ft_memset(*p+2, 105, 1);
	ft_memset(*p+3, 0, 1);
	printf("%s", buffer);
	*/
}
