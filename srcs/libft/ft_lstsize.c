#include "../../includes/libft.h"

int	ft_lstsize(t_stack *lst)
{
	int		size;
	t_stack	*tmp;

	size = 0;
	tmp = lst;
	if (lst)
	{
		while (tmp != NULL)
		{
			size++;
			tmp = tmp->next;
		}
	}
	return (size);
}
