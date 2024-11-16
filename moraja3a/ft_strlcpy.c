#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)   // awla dstsize > 0. it does the same apparently
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int main()
{
	char buffer1[] = "tst1337";
	char buffer2[] = "tst1337";
	char dest1[10];
	char dest2[10];

	printf("%zu\n", ft_strlcpy(dest1, buffer1, 10));
	printf("%zu\n", strlcpy(dest2, buffer2, 10));
	printf("%s\n", dest1);
	printf("%s", dest2);
}*/
