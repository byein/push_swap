/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:25:33 by yebkim            #+#    #+#             */
/*   Updated: 2022/03/03 02:25:35 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	**get_numbers(char **av)
{
	char	**params;
	char	*str;

	str = join_strings(av);
	if (!str)
		return (NULL);
	params = ft_split(str, ' ');
	if (!params)
	{
		free(str);
		return (NULL);
	}
	free(str);
	return (params);
}

int	check_sort(t_stack **stack_a)
{
	if (check_sorted(stack_a))
	{
		free_stack(stack_a);
		return (1);
	}
	return (0);
}
