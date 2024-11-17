/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:34:58 by mmanyani          #+#    #+#             */
/*   Updated: 2024/11/17 17:18:37 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_len(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*ptr;
	int				len;
	unsigned int	nbr;

	len = calc_len(n);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ptr[len] = '\0';
	if (n == 0)
		ptr[0] = '0';
	if (n < 0)
	{
		ptr[0] = '-';
		nbr = -n;
	}
	else
		nbr = n;
	while (nbr > 0)
	{
		ptr[len - 1] = nbr % 10 + 48;
		nbr = nbr / 10;
		len--;
	}
	return (ptr);
}

/*
int main()
{
	char *tst;

	tst = ft_itoa(-2147483648);
	if (tst == NULL)
		printf("alloc failed");
	else
		printf("%s", tst);
}*/
