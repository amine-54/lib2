/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:31:33 by mmanyani          #+#    #+#             */
/*   Updated: 2024/11/09 20:37:57 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		//new->next = NULL;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
/*
int main()
{
	t_list *root;
	t_list *node1;
	t_list *node2;
	t_list *new_node;
	int	value1;
	int value2;
	int new_value;

	value1 = 20;
	value2 = 15;
	new_value = 1;
	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node1->content = &value1;
	node1->next = node2;
	node2->content = &value2;
	node2->next = NULL;
	
	new_node = malloc(sizeof(t_list));
	new_node->content = &new_value;
	new_node->next = NULL;
	root = node1;
	ft_lstadd_front(&root, new_node);

	t_list *temp;
	temp = root;
	while (temp != NULL)
	{
		printf("%d\n", *(int *)temp->content);
		temp = temp->next;
	}
}*/
