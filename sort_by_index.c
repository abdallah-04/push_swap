/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_by_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amufleh <amufleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:13:24 by amufleh           #+#    #+#             */
/*   Updated: 2025/12/22 11:13:27 by amufleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handel_index_one(t_list **stack_a, t_list **stack_b, int flage)
{
	push_b(stack_a, stack_b);
	if (flage == 4)
		sort_three(stack_a);
	else if (flage == 5)
		sort_four(stack_a, stack_b);
}

void	handel_index_tow(t_list **stack_a, t_list **stack_b, int flage)
{
	swap_a(*stack_a);
	push_b(stack_a, stack_b);
	if (flage == 4)
		sort_three(stack_a);
	else if (flage == 5)
		sort_four(stack_a, stack_b);
}

void	handel_index_three(t_list **stack_a, t_list **stack_b, int flage)
{
	rotate_a(stack_a);
	rotate_a(stack_a);
	push_b(stack_a, stack_b);
	if (flage == 4)
		sort_three(stack_a);
	else if (flage == 5)
		sort_four(stack_a, stack_b);
}

