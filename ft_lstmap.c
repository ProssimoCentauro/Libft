#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_elem;
	t_list	*head;
	t_list	*current;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	current = lst;
	while (current)
	{
		new_elem = ft_lstnew(f(current->content));
		if (!new_elem)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new_elem);
		current = current->next;
	}
	return (head);
}
