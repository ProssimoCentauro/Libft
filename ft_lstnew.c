#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;
	
	element = (t_list *)malloc(sizeof(t_list));
	element->content = content;
	element->next = NULL;
	return (element);
}
