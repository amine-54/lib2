#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	j = 0;
	while (src[j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
/*
int main()
{
	char	buffer1[] = "tst1337hh";
	char	buffer2[] = "tst1337hh";
	char	dest1[10] = "amine";
	char	dest2[10] = "amine";

	printf("%zu\n", strlcat(dest1, buffer1, 7));
	printf("%s\n", dest1);
	printf("%zu\n", ft_strlcat(dest2, buffer2, 7));
	printf("%s", dest2); 
}*/
