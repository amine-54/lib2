#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char *tmp1;
	unsigned char *tmp2;

	if (dst == NULL && src == NULL)
		return (NULL);
	tmp1 = (unsigned char *)dst;
	tmp2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		tmp1[i] = tmp2[i];
		i++;
	}
	return (dst);
}

int main()
{
	char buffer[] = "tst1337";
	char buffer2[] = "tst1337";
	//char dest[20];

	ft_memcpy(buffer , buffer + 1, 4);
	memcpy(buffer2, buffer + 1, 4);
	printf("%s\n", buffer);
	printf("%s", buffer2);

	//???   they dont behave the same tf, ymkn bsbab copiler idk
}
