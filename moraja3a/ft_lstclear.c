#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*del_node;

	if (lst == NULL || del == NULL)
		return ;
	current = *lst;
	while (current != NULL)
	{
		del_node = current;
		current = current->next;
		ft_lstdelone(del_node, del);
	}
	*lst = NULL;
}

//awlaa -------------------

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		current = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = current;
	}
}
