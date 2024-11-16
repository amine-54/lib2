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
			del(tmp); /* You need to free tmp (the content allocated by f(current->content)) when ft_lstnew fails. You should add a del(tmp) call inside the error handling block to ensure that any memory allocated for tmp is properly freed.

						     del(tmp);  // Free the content (tmp) allocated by f(current->content)

    This ensures that the memory for the node's content is freed if the node itself cannot be created.

Explanation:

    Memory allocation: You apply the function f on each node's content to create a new content (tmp).

    Node creation: You try to create a new node using ft_lstnew(tmp).

    Error handling: If ft_lstnew fails (i.e., node == NULL), you need to:
        Free the content (tmp) that was created by the function f, which might have been dynamically allocated.
        Call ft_lstclear on the list so far to free any nodes that were added to list.
        Return NULL to indicate the failure.

    Normal execution: If node creation succeeds, you add the new node to the result list using ft_lstadd_back, and continue with the next node in the original list.

Why this solves the issue:

By freeing the memory allocated for the content (tmp), you avoid a memory leak when ft_lstnew fails. The del function should be responsible for cleaning up any allocated memory, and this fix ensures it is called when necessary.
*/
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
