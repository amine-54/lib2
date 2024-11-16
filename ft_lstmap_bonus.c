/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:03:53 by mmanyani          #+#    #+#             */
/*   Updated: 2024/11/16 15:49:58 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
/*
void	*f(void *s)
{
	int	*value = (int *)s;

	*value = *value * 2;
	return (value);
}

void	delete(void *s)
{
	free(s);
}
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*list;
	t_list	*node;
	void	*tmp;

	if (lst == NULL || f == NULL)
		return (NULL);
	current = lst;
	list = NULL;
	while (current != NULL)
	{
		tmp = f(current->content);
		node = ft_lstnew(tmp);
		if (node == NULL)
		{
			del(tmp);
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		current = current->next;
	}
	return (list);
}
/*
int main()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	int *value1 = malloc(sizeof(int));
	int	*value2 = malloc(sizeof(int));
	int	*value3 = malloc(sizeof(int));

	*value1 = 20;
	*value2 = 5;
	*value3 = 12;
	node1 = ft_lstnew(value1);
	node2 = ft_lstnew(value2);
	node3 = ft_lstnew(value3);
	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);

	printf("before:\n");
	t_list	*current;
	current = node1;
	while (current != NULL)
	{
		printf("%d ", *(int *)current->content);
		current = current->next;
	}

	t_list *list_mapped;
	list_mapped = ft_lstmap(node1, f, delete);
	printf("\nafter:\n");
	current = list_mapped;
	while (current != NULL)
	{
		printf("%d ", *(int *)current->content);
		current = current->next;
	}
}*/
