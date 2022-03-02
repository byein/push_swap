#include "../../includes/libft.h"

t_stack	*ft_lstnew(int number)
{
	t_stack	*new_elem;

	new_elem = malloc(sizeof(t_stack));
	if (!new_elem)
		return (NULL);
	new_elem->number = number;
	new_elem->next = NULL;
	return (new_elem);
}
