/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amufleh <amufleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 12:43:28 by amufleh           #+#    #+#             */
/*   Updated: 2025/12/22 17:34:19 by amufleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	return_all_to_a(t_list **stack_a, t_list **stack_b)
{
	while (*stack_b)
	{
		push_a(stack_a, stack_b);
	}
}

int	count_max_bit(t_list *stack_a)
{
	int	count;
	int	max_num;

	count = 0;
	max_num = ft_lstsize(stack_a);
	while ((max_num >> count) != 0)
		count++;
	return (count);
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	size;
	int	size2;

	size = count_max_bit(*stack_a);
	i = 0;
	while (size)
	{
		size2 = ft_lstsize(*stack_a);
		while(size2)
		{
			if ((((*stack_a)->index >> i) & 1) == 0)
				push_b(stack_a, stack_b);
			else
				rotate_a(stack_a);
			size2--;
		}
		return_all_to_a(stack_a, stack_b);
		i++;
		size--;
	}
}
