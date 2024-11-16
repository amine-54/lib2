#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while(s[i])
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/*awla hh
 * char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}*/


int main()
{
	char	buffer1[] = "tst1337hh";
	char	buffer2[] = "tst1337hh";

	printf("%s\n", strchr(buffer1, 51));
	printf("%s", ft_strchr(buffer2, 51));
}
