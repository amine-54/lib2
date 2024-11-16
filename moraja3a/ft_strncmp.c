#include <stdio.h>
#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] && s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*
int main()
{
	
	char buffer[] = "amine";
	char buffer2[] = "ami";
	int	tst = strncmp(buffer2, buffer, -4);

	printf("%d\n", tst);
	printf("%d", ft_strncmp("ami", "amine", -4));
}
*/
//cast the characters to unsigned char when calculating the difference, because char might be signed on some systems, leading to unexpected behavior.
