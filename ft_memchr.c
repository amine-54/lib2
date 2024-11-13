/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:02:09 by mmanyani          #+#    #+#             */
/*   Updated: 2024/11/13 13:23:52 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/* ft_memchr work on raw memory. it do not assume that the memory block is a null-terminated string. Therefore, it will not stop when encountering a null character ('\0').
The condition while (i < n) effectively ensures that you stay within the bounds of the specified memory block and checks only the bytes you're supposed to. If you wanted 
to implement logic for null-terminated strings specifically, you would need a different function (like strlen or a string comparison function) rather than a memory search 
function like memchr.*/

/*int main ()
{
    char *result;

    result = ft_memchr("amine", 101 , 5);
    if (result == NULL)
        printf("NOT FOUND");
    else
        printf("%c", *result);
}*/
