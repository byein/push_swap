/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:26:26 by yebkim            #+#    #+#             */
/*   Updated: 2022/03/03 02:26:27 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	handle_errors(void)
{
	ft_putendl_fd("Error", 1);
	exit(1);
}

void	*free_2d(char **tab)
{
	int	index;

	index = 0;
	while (tab[index])
	{
		free(tab[index]);
		index++;
	}
	free(tab);
	return (NULL);
}

void	free_and_exit(t_stack **stack)
{
	if (!free_stack(stack))
		handle_errors();
	handle_errors();
}

int	check_number(t_stack **stack, int number)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp != NULL)
	{
		if (tmp->number == number)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
