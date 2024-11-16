#include <stdio.h>
#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while(i > 0)
	{
		if (s[i - 1] == (char)c)
			return ((char *)&s[i - 1]);
		i--;
	}
	if ((char)c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	return (NULL);
}

int main()
{
	char buffer[] = "hello, world";
	char buffer2[] = "hello, world";

	printf("%s\n", strrchr(buffer, 'z'));
	printf("%s", ft_strrchr(buffer2, 'z'));
}
