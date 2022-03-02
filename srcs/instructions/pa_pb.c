/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:26:45 by yebkim            #+#    #+#             */
/*   Updated: 2022/03/03 02:26:46 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	push_a(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_b || !*stack_b || !stack_a)
		return ;
	insert_first(stack_a, (*stack_b)->number);
	pop(stack_b);
}

void	push_b(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a || !*stack_a || !stack_b)
		return ;
	insert_first(stack_b, (*stack_a)->number);
	pop(stack_a);
}
