/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:09:48 by mmanyani          #+#    #+#             */
/*   Updated: 2024/10/28 19:12:16 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == NULL || src == NULL)
		return (NULL);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		while(n > 0)
		{
			*((unsigned char *)(dest + n - 1)) = *((unsigned char *)(src + n - 1));
			n--;
		}
	}
	return (dest);
}

/*int main()
{
    char tst[20] = "hello world";

    ft_memmove(tst + 6, tst, 5);
    printf("%s", tst);
}*/
