/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_coded_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amufleh <amufleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:30:22 by amufleh           #+#    #+#             */
/*   Updated: 2025/12/17 14:34:23 by amufleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mini_sort(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size == 2)
		swap_a(*stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4)
		sort_four(stack_a, stack_b);
	else if (size == 5)
		sort_five(stack_a, stack_b);
}


void	sort_three(t_list **stack_a)
{
	int	b;
	int	c;

	b = (*stack_a)->next->content;
	c = (*stack_a)->next->next->content;
	if ((*stack_a)->content > b && b > c)
	{
		swap_a(*stack_a);
		reverse_rotate_a(stack_a);
	}
	else if ((*stack_a)->content > b && (*stack_a)->content > c && b < c)
	{
		reverse_rotate_a(stack_a);
		reverse_rotate_a(stack_a);
	}
	else if ((*stack_a)->content < b && b > c && (*stack_a)->content > c)
		reverse_rotate_a(stack_a);
	else if ((*stack_a)->content > b && (*stack_a)->content < c)
		swap_a(*stack_a);
	else if ((*stack_a)->content < b && (*stack_a)->content < c && b > c)
	{
		reverse_rotate_a(stack_a);
		swap_a(*stack_a);
	}
}

void sort_four(t_list **stack_a, t_list **stack_b)
{
    int min_index;

    min_index = find_min(*stack_a);
    if (min_index == 1)
    {
        push_b(stack_a, stack_b);
        sort_three(stack_a);
    }
    else if (min_index == 2)
    {
        swap_a(*stack_a);
        push_b(stack_a, stack_b);
        sort_three(stack_a);
    }
    else if (min_index == 3)
    {
        reverse_rotate_a(stack_a);
        reverse_rotate_a(stack_a);
        push_b(stack_a, stack_b);
        sort_three(stack_a);
    }
    else if (min_index == 4)
    {
        reverse_rotate_a(stack_a);
        push_b(stack_a, stack_b);
        sort_three(stack_a);
    }
    push_a(stack_a, stack_b);
}

void sort_five(t_list **stack_a, t_list **stack_b)
{
    int min_index;

    min_index = find_min(*stack_a);
    if (min_index == 1)
    {
        push_b(stack_a, stack_b);
        sort_four(stack_a, stack_b);
    }
    else if (min_index == 2)
    {
        swap_a(*stack_a);
        push_b(stack_a, stack_b);
        sort_four(stack_a, stack_b);
    }
    else if (min_index == 3)
    {
        reverse_rotate_a(stack_a);
        reverse_rotate_a(stack_a);
        reverse_rotate_a(stack_a);
        push_b(stack_a, stack_b);
        sort_four(stack_a, stack_b);
    }
    else if (min_index == 4)
    {
        reverse_rotate_a(stack_a);
        reverse_rotate_a(stack_a);
        push_b(stack_a, stack_b);
        sort_four(stack_a, stack_b);
    }
    else if (min_index == 5)
    {
        reverse_rotate_a(stack_a);
        push_b(stack_a, stack_b);
        sort_four(stack_a, stack_b);
    }
    push_a(stack_a, stack_b);
}
