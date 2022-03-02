/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 02:26:09 by yebkim            #+#    #+#             */
/*   Updated: 2022/03/03 02:26:10 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_stack	*new_node(int number)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->number = number;
	new->next = NULL;
	return (new);
}

int	push(t_stack **stack, int number)
{
	t_stack	*tmp;
	t_stack	*new;

	if (!stack)
		return (0);
	new = new_node(number);
	if (!new)
		return (0);
	if (!*stack)
	{
		*stack = new;
		return (1);
	}
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (1);
}

int	insert_first(t_stack **stack, int number)
{
	t_stack	*new;

	if (!stack)
		return (0);
	new = new_node(number);
	if (!new)
		return (0);
	if (!*stack)
	{
		*stack = new;
		return (1);
	}
	new->next = *stack;
	*stack = new;
	return (1);
}

int	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack)
		return (0);
	while (*stack)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
	return (1);
}
