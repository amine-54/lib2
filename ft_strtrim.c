/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:38:01 by mmanyani          #+#    #+#             */
/*   Updated: 2024/11/17 16:55:43 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	found_in_set(char const c, char const *set)
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
	size_t	start_index;
	size_t	end_index;
	size_t	size;

	if (!s1 || !set)
		return (NULL);
	start_index = 0;
	if (s1[start_index] == '\0')
		return (ft_strdup(""));
	while (s1[start_index] && found_in_set(s1[start_index], set) == 1)
		start_index++;
	if (s1[start_index] == '\0')
		return (ft_strdup(""));
	end_index = ft_strlen(s1) - 1;
	while (end_index > start_index && found_in_set(s1[end_index], set) == 1)
		end_index--;
	size = end_index - start_index + 1;
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1 + start_index, size + 1);
	return (ptr);
}
