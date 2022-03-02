#include "../../includes/libft.h"

void	ft_lstadd_front(t_stack **alst, t_stack *new)
{
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}
