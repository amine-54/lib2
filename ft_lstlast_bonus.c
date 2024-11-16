/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:17:11 by mmanyani          #+#    #+#             */
/*   Updated: 2024/11/10 12:05:07 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	current = lst;
	while (current->next != NULL)
		current = current->next;
	return (current);
}
/*
int main()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	t_list *lastnode;

	int	value1 = 20;
	int	value2 = 15;
	int	value3 = 50;

	node1 = ft_lstnew(&value1);
	node2 = ft_lstnew(&value2);
	node3 = ft_lstnew(&value3);
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	lastnode = ft_lstlast(node1);
	printf("%d", *(int *)lastnode->content);
}*/
