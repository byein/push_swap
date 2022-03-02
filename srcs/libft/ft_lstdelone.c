#include "../../includes/libft.h"

void	ft_lstdelone(t_stack *lst, void (*del)(void *))
{
	(del)(lst->number);
	free(lst);
}
