/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:34:15 by mmanyani          #+#    #+#             */
/*   Updated: 2024/11/17 17:17:13 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str != c)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
		else
			str++;
	}
	return (count);
}

static char	**free_ptr(char **ptr, int i)
{
	while (i > 0)
	{
		free(ptr[i - 1]);
		i--;
	}
	free(ptr);
	return (NULL);
}

static char	*extract_word(const char *str, char c, int *index)
{
	char	*ptr;
	int		length;
	int		i;

	while (str[*index] && str[*index] == c)
		(*index)++;
	length = 0;
	while (str[*index + length] && str[*index + length] != c)
		length++;
	ptr = (char *)malloc((length + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		ptr[i] = str[*index + i];
		i++;
	}
	*index = *index + length;
	ptr[length] = '\0';
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		index;
	int		i;

	if (s == NULL)
		return (NULL);
	ptr = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	index = 0;
	while (i < count_words(s, c))
	{
		ptr[i] = extract_word(s, c, &index);
		if (ptr[i] == NULL)
			return (free_ptr(ptr, i));
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}
