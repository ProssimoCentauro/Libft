#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp_elem;

	if (!lst)
		return (NULL);
	temp_elem = lst;
	while (temp_elem->next)
		temp_elem = temp_elem->next;
	return (temp_elem);
}
