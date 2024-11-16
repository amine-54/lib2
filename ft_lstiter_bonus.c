/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:56:33 by mmanyani          #+#    #+#             */
/*   Updated: 2024/11/16 12:03:18 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	current = lst;
	while (current != NULL)
	{
		f(current->content);
		current = current->next;
	}
}
/*
void f(void *s)
{
	printf("%s ", (char *)s);
}

int main()
 {
     t_list *new = malloc(sizeof(t_list));
     new->content = "tstalah";
     new->next = NULL;
     ft_lstiter(new, f);
     return (0);
 }*/
