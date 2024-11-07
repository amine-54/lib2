/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:43:39 by mmanyani          #+#    #+#             */
/*   Updated: 2024/11/06 15:02:55 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*static char	fill(unsigned int index, char s)
{
	char	c;

	c = s + index;
	return (c);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	size_t			len;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = (*f)(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int main()
{
	char *tst;

	tst = ft_strmapi(NULL, fill);
	if (tst == NULL)
		printf("alloc failed");
	else
		printf("%s", tst);
}*/
