/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:29:22 by yebkim            #+#    #+#             */
/*   Updated: 2022/03/03 02:32:17 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
