/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:34:58 by mmanyani          #+#    #+#             */
/*   Updated: 2024/11/03 15:33:20 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*ptr;
	char	*tmp;
	int	reminder;
	int	i;
	int size;
	int j;

	i = 0;
	while (n != 0)
	{
		tmp[i] = n % 10 + 48;
		n = n / 10;
		i++;
	}
	size = ft_strlen(tmp);
	ptr = (char *)malloc(size * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	j = size - 1;
	while (j >= 0)
	{
		ptr[i] = tmp[j];
		i++;
		j--;
	}
	ptr[i] = '\0';
	return (ptr);
}
// ghalat????? a revoir
int main()
{
	char *tst;

	tst = ft_itoa("150");
	if (tst == NULL)
		printf("alloc failed");
	else
		printf("%s", tst);
}
