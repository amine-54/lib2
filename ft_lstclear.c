/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:28:29 by mmanyani          #+#    #+#             */
/*   Updated: 2024/11/10 17:00:41 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
/*
void	delete(void * content)
{

}
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *current;

	if (lst == NULL || lst == NULL)
		return ;

	while (*lst != NULL)
	{
		current = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = current;
	}
}
/*
int main()
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	int	value1 = 20;
	int	value2 = 50;
	int value3 = 7;
	node1 = ft_lstnew(&value1);
	node2 = ft_lstnew(&value2);
	node3 = ft_lstnew(&value3);
	head = node1;
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);

	t_list	*current;
	current = head;

	printf("before:\n");
	while (current != NULL)
	{
		printf("%d ", *(int *)current->content);
		current = current->next;
	}
	printf("\n");

	ft_lstclear(&(node1->next), delete);

	current = head;
	printf("after:\n");
	while (current != NULL)
	{
		printf("%d ", *(int *)current->content);
		current = current->next;
	}
}
*/
