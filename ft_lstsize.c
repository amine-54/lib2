/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:52:52 by mmanyani          #+#    #+#             */
/*   Updated: 2024/11/09 21:16:02 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		count;

	count = 0;
	current = lst;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}

int main()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	int	value1;
	int	value2;
	int	value3;

	value1 = 20;
	value2 = 50;
	value3 = 10;
	node1 = ft_lstnew(&value1);
	node2 = ft_lstnew(&value2);
	node3 = ft_lstnew(&value3);
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	printf("%d\n", ft_lstsize(node1));
	
	t_list *current;
	current = node1;
	while (current != NULL)
	{
		printf("%d ", *(int *)current->content);
		current = current->next;
	}
	free(node1);
	free(node2);
	free(node3);
}
