#include "Libft.h""

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list = temp_elem;

	if (!lst)
		return ;
	while (*lst)
	{
		temp_elem = *lst->next;
		ft_lstdelone(*lst, del);
		*lst = temp_elem;
	}
}
