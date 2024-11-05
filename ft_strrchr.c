/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:20:28 by mmanyani          #+#    #+#             */
/*   Updated: 2024/10/29 10:22:22 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (*(s + i - 1) == (char)c)
			return ((char *)s + i - 1);
		i--;
	}
	printf("%zu", i);
	if ((char)c == '\0')
		return ((char *)s + ft_strlen(s));
	return (NULL);
}
/*
int main()
{
    char *result;

    result =  ft_strrchr("amiae", 'a');

    if (result != NULL)
        printf("%c", *result);
    else
        printf("NOT FOUND");
}*/
