/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:06:15 by mmanyani          #+#    #+#             */
/*   Updated: 2024/11/10 13:01:21 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		new->next = NULL;
		return ;
	}
	current = ft_lstlast(*lst);
	current->next = new;
	new->next = NULL;
}
/*
int main()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*new_node;

	int	value1 = 20;
	int value2 = 15;
	int value3 = 50;
	int	new_value = 22;
	node1 = ft_lstnew(&value1);
	node2 = ft_lstnew(&value2);
	node3 = ft_lstnew(&value3);
	new_node = ft_lstnew(&new_value);
	
	t_list	*head;
	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	t_list *current;

	current = node1;
	ft_lstadd_back(&head, new_node);
	while (current != NULL)
	{
		printf("%d ", *(int *)current->content);
		current = current->next;
	}
}
*/
