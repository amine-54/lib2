/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:17:00 by mmanyani          #+#    #+#             */
/*   Updated: 2024/11/16 16:52:55 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;
	size_t			all_size;

	i = 0;
	all_size = count * size;
	if (count != 0 && ((all_size / count) != size))
		return (NULL);
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
