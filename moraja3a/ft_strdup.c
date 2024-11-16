#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int main()
{
	//char *ptr1;
	char *ptr2;

	//ptr1 = strdup("nnhh");
	ptr2 = ft_strdup("tstst");

	//printf("%s\n", ptr1);
	printf("%s", ptr2);
}*/
