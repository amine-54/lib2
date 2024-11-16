#include <stdio.h>
#include <string.h>
#include "libft.h"

/*char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (ft_strncmp(&haystack[i], needle, ft_strlen(needle)) == 0)
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if(*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
			if(needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char *tst1;
	char *tst2;

	tst1 = strnstr("tst1337tsthh", "tst", 3);
	tst2 = ft_strnstr("tst1337tsthh", "tst", 3);

	printf("%s\n", tst1);
	printf("%s", tst2);
}*/
