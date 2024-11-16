#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	full_size;
	int		i;
	int		j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	full_size = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc((full_size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/* awla f lwhile u can do;
 while (i <strlen(s1))  o  while (j < strlen(s2)) blast lwhiles li lfo9. bjoj s7a7*/

int main()
{
	char *tst;

	tst = ft_strjoin(NULL, "1337");
	if (tst == NULL)
		printf("alloc failed");
	else
		printf("%s", tst);
	free(tst);
}
