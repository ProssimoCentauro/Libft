#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp_elem;

	temp_elem = lst;
	i = 0;
	while (temp_elem)
	{
		temp_elem = temp_elem->next;
		i++;
	}
	return (i);
}
