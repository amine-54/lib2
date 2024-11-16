#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	found(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	size_t	j;
	size_t	size;

	if (s1 ==  NULL || set == NULL)
		return (NULL);
	i = 0;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	while (s1[i] && found(s1[i], set) == 1)
		i++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while (j > i && found(s1[j], set) == 1)
		j--;
	size = j - i + 1;
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1 + i, size + 1);
	return (ptr);
}

int main()
{
	char	*tst;

	tst = ft_strtrim("", "tst");
	printf("%s", tst);
}
