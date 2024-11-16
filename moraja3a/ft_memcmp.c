#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

/*
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;	
	
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
*/

/*
int main()
{
	int	tst1 = memcmp("amine", "ami\0e", 3);
	int tst2 = ft_memcmp("amine", "ami\0e", 3);

	printf("%d %d", tst1, tst2);
}*/	

/*
int main()
{
    printf("%d", ft_memcmp("amine", "amineeee", 6));
}
AWLA 
    x = (unsigned char *)s1;
	y = (unsigned char *)s2;
	if (!n)
		return (0);
	while (i < n)
	{
		if (x[i] != y[i])
			return (x[i] - y[i]);
		i++;
	}
	return (0);
*/
