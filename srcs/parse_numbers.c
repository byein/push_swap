/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:25:41 by yebkim            #+#    #+#             */
/*   Updated: 2022/03/03 02:25:43 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*join_strings(char **av)
{
	char	*final_str;
	char	*space;
	int		index;

	index = 1;
	space = " ";
	final_str = NULL;
	while (av[index])
	{
		if (!final_str)
			final_str = ft_strdup(av[index]);
		else
		{
			join_bufto_str(&final_str, space);
			join_bufto_str(&final_str, av[index]);
		}
		index++;
	}
	return (final_str);
}

int	ft_str_check_numbers(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == '-' || str[index] == '+')
		{
			index++;
			if (!ft_isdigit(str[index]))
				return (0);
		}
		else if (!ft_isdigit(str[index]))
			return (0);
		index++;
	}
	return (1);
}

int	check_numbers(char **av)
{
	int		index;
	char	*ptr;

	index = 1;
	while (av[index])
	{
		ptr = av[index];
		if (ptr[0] == '-' || ptr[0] == '+')
		{
			if (!ft_str_check_numbers(++ptr))
				return (0);
		}
		else if (!ft_str_check_numbers(ptr))
			return (0);
		index++;
	}
	return (1);
}
