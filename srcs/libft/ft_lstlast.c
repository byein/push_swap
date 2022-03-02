/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:34:00 by yebkim            #+#    #+#             */
/*   Updated: 2022/03/03 02:34:01 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_stack	*ft_lstlast(t_stack *lst)
{
	t_stack	*tmp;

	if (!lst)
		return (NULL);
	else
	{
		tmp = lst;
		while (tmp->next != NULL)
			tmp = tmp->next;
		return (tmp);
	}
	return (NULL);
}
