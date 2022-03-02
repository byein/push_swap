#include "../../includes/libft.h"

void	ft_lstclear(t_stack **lst, void (*del)(void *))
{
	t_stack	*tmp;
	t_stack	*next;

	tmp = *lst;
	while (tmp != NULL)
	{
		next = tmp->next;
		(del)(tmp->number);
		free(tmp);
		tmp = next;
	}
	*lst = NULL;
}
