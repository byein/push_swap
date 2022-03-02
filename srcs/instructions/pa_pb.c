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
