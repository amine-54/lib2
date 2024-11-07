/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:00:15 by mmanyani          #+#    #+#             */
/*   Updated: 2024/11/07 15:38:37 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;

	i = 0;
	//ptr = (unsigned char *)s;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}
