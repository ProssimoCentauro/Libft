#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*nextelem;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		nextelem = current->next;
		del(current->content);
		free(current);
		current = nextelem;
	}
	*lst = NULL;
}
