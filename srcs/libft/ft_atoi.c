/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:27:26 by yebkim            #+#    #+#             */
/*   Updated: 2022/03/03 02:27:51 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	ft_isspace(int c)
{
	return ((c >= '\t' && c <= '\r') || (c == ' '));
}

long	ft_atoi(const char *nptr)
{
	long	nb;
	int		sign;
	int		index;

	nb = 0;
	sign = 1;
	index = 0;
	if (ft_str_check_numbers((char *)nptr) == 0)
		handle_errors();
	while (ft_isspace(nptr[index]))
		index++;
	if (nptr[index] == '-')
	{
		sign = -sign;
		index++;
	}
	else if (nptr[index] == '+')
		index++;
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		nb = nb * 10 + (nptr[index] - '0');
		index++;
	}
	return (nb * sign);
}
