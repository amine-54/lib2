/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:03:23 by mmanyani          #+#    #+#             */
/*   Updated: 2024/11/06 16:03:01 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*void	tst(unsigned int index, char *s)
{
	*s = *s + index;
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		//printf("before : %c\n", s[i]); 
		(*f)(i, &s[i]);
		//printf("after : %c\n", s[i]);
		i++;
	}
}
/*
int main()
{
	char ts[6] = "amine";

	ft_striteri(ts, tst);
}*/
