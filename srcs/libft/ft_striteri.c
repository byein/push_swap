/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:30:11 by yebkim            #+#    #+#             */
/*   Updated: 2022/03/03 02:32:46 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	index;

	index = 0;
	while (s[index])
	{
		(f)(index, &s[index]);
		index++;
	}
}
