/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:29:25 by yebkim            #+#    #+#             */
/*   Updated: 2022/03/03 02:32:19 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
