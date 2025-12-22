/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amufleh <amufleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:11:52 by amufleh           #+#    #+#             */
/*   Updated: 2025/12/22 10:15:37 by amufleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list *stack_a)
{
	int temp;

	if (!stack_a || !stack_a->next)
		return;
	temp = stack_a -> content;
	stack_a->content = stack_a->next->content;
	stack_a->next->content = temp;
	printf("sa\n");
}

void	reverse_rotate_a(t_list **stack_a)
{
	t_list	*last;
	t_list	*p_last;

	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return;
	p_last = NULL;
	last = *stack_a;
	while (last->next)
	{
		p_last = last;
		last = last->next;
	}
	p_last->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
	printf("rra\n");
}

void	push_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (!stack_b || !(*stack_b))
		return;
	tmp = *stack_b;
	*stack_b = tmp->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	printf("pa\n");
}

void	push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (!stack_a || !(*stack_a))
		return;
	tmp = *stack_a;
	*stack_a = tmp->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	printf("pb\n");
}

void	rotate_a(t_list **stack_a)
{
	t_list	*first;
	t_list	*last;

	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return;
	first = *stack_a;
	last = ft_lstlast(*stack_a);
	*stack_a = first->next;
	first->next = NULL;
	last->next = first;
	printf("ra\n");
}
