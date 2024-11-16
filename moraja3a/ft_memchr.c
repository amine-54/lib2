#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr;
	size_t	i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

/*void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
*/

/*
int main()
{
	char *tst;
	char *tst2;
	char buffer[] = "amine";

	tst = ft_memchr(buffer, 'i', 2);
	tst2 = memchr(buffer, 'm', 2);
	printf("%s\n", tst);
	printf("%s\n", tst2);
}
*/

/*
 ft_memchr work on raw memory. it do not assume that the memory block is a null-terminated string. Therefore, it will not stop when encountering a null character ('\0').
The condition while (i < n) effectively ensures that you stay within the bounds of the specified memory block and checks only the bytes you're supposed to. If you wanted 
to implement logic for null-terminated strings specifically, you would need a different function (like strlen or a string comparison function) rather than a memory search 
function like memchr.
*/

