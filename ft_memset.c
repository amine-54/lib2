/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:58:08 by mmanyani          #+#    #+#             */
/*   Updated: 2024/10/30 18:34:54 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
    size_t i;

    unsigned char *p;

    p = (unsigned char *)s;
    i = 0;

    /*if (s == NULL)
        return (NULL);        ??*/ 
    while (i < n)
    {
        p[i] = (unsigned char)c;
        i++;
    }
    return (s);
}

int main()
{
    char array[20];
    ft_memset(array, 'a', 20);
    int i = 0;
    while (i < 20)
    {
        printf("%d", array[i]);
        i++;
    }
}

