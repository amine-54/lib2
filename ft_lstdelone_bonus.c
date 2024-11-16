/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:02:59 by mmanyani          #+#    #+#             */
/*   Updated: 2024/11/10 15:27:48 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/*void	delete(void *content)
{
	free(content);
}
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*
int main()
{
	t_list	*head;
	int	*value1;
	int	*value2;
	int	*value3;
	value1 = malloc(sizeof(int));
	value2 = malloc(sizeof(int));
	value3 = malloc(sizeof(int));
	*value1 = 50;
	*value2 = 20;
	*value3 = 10;
	t_list *node1 = ft_lstnew(value1);
	t_list *node2 = ft_lstnew(value2);
	t_list *node3 = ft_lstnew(value3);
	head = node1;
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	head = node2;
	ft_lstdelone(node1, delete);
	t_list *current;
	current = head;

	while (current != NULL)
	{
		printf("%d ", *(int *)current->content);
		current = current->next;
	}
	ft_lstdelone(node2, delete);
	ft_lstdelone(node3, delete);
}*/
