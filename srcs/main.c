/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:25:21 by yebkim            #+#    #+#             */
/*   Updated: 2022/03/03 02:25:22 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**numbers;

	if (ac > 1)
	{
		numbers = get_numbers(av);
		push_elements(&stack_a, numbers);
		stack_b = NULL;
		if (check_sort(&stack_a))
		{
			free_2d(numbers);
			free_stack(&stack_a);
			return (0);
		}
		sort(&stack_a, &stack_b);
		free_2d(numbers);
		free_stack(&stack_a);
		free_stack(&stack_b);
	}
	return (0);
}
