#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;

	if (!lst || !f)
		return (NULL);
	new_elem = NULL;
	while (lst)
	{
		new_elem = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&new_elem, (*del)(new_elem->content));
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}
