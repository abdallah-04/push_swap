/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amufleh <amufleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:52:17 by amufleh           #+#    #+#             */
/*   Updated: 2025/12/22 19:06:50 by amufleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (!(input_validation(&stack_a, argc, argv)))
	{
		if (argc == 1)
			exit (0);
		ft_lstclear(&stack_a, free);
		print_error();
	}
	if (is_sorted(stack_a))
	{
		ft_lstclear(&stack_a, free);
		exit(0);
	}
	assign_indices(stack_a);
	if (ft_lstsize (stack_a) <= 5)
		mini_sort(&stack_a, &stack_b);
	else
		radix_sort(&stack_a, &stack_b);
	ft_lstiter(stack_a, ft_putnbr);
	ft_lstclear(&stack_a, free);
	return (0);
}
