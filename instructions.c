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
	int	temp_content;
	int	temp_index;

	if (!stack_a || !stack_a->next)
		return;
	temp_content = stack_a->content;
	stack_a->content = stack_a->next->content;
	stack_a->next->content = temp_content;
	temp_index = stack_a->index;
	stack_a->index = stack_a->next->index;
	stack_a->next->index = temp_index;
	ft_putstr_fd("sa\n", 1);
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
	ft_putstr_fd("rra\n", 1);
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
	ft_putstr_fd("pa\n", 1);
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
	ft_putstr_fd("pb\n", 1);
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
	ft_putstr_fd("ra\n", 1);
}
