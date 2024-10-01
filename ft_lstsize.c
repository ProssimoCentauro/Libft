#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	int	i;

	current = lst;
	i = 0;
	while (current)
	{
		i++;
		current = current->next;
	}
	return (i);
}
