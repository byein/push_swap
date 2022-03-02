/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:33:51 by yebkim            #+#    #+#             */
/*   Updated: 2022/03/03 02:33:52 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
