/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:17:00 by mmanyani          #+#    #+#             */
/*   Updated: 2024/11/18 09:34:58 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;
	size_t			all_size;

	if (count == 0 || size == 0)
		return (malloc(0));
	i = 0;
	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	all_size = count * size;
	ptr = (unsigned char *)malloc(all_size);
	if (ptr == NULL)
		return (NULL);
	while (i < all_size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
