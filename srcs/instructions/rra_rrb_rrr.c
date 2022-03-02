/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:27:05 by yebkim            #+#    #+#             */
/*   Updated: 2022/03/03 02:27:06 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	reverse_rotate_a(t_stack **stack_a)
{
	t_stack	*tmp;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	tmp = *stack_a;
	while (tmp->next)
		tmp = tmp->next;
	insert_first(stack_a, tmp->number);
	remove_last(stack_a);
}

void	reverse_rotate_b(t_stack **stack_b)
{
	t_stack	*tmp;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	while (tmp->next)
		tmp = tmp->next;
	insert_first(stack_b, tmp->number);
	remove_last(stack_b);
}

void	reverse_rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate_a(stack_a);
	reverse_rotate_b(stack_b);
}
