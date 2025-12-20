/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amufleh <amufleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:52:17 by amufleh           #+#    #+#             */
/*   Updated: 2025/12/17 14:27:48 by amufleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_list *deep_copy(t_list *list_to_copy)
// {
// 	t_list *temp;
// 	t_list *node;
// 	t_list *list;
// 	int	content;

// 	if (!list_to_copy)
// 		return (0);
// 	content = list_to_copy -> content;
// 	node = ft_lstnew(content);
// 	list = node;
// 	temp = node;
// 	list_to_copy = list_to_copy -> next;
// 	while (list_to_copy)
// 	{
// 		content = list_to_copy -> content;
// 		node = ft_lstnew(content);
// 		temp -> next = node;
// 		temp = temp -> next;
// 		list_to_copy = list_to_copy -> next;
// 	}
// 	return (list);
// }


int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	input_validation(&stack_a, argc, argv);
	assign_indices(stack_a);
	if (ft_lstsize (stack_a) <= 5)
		mini_sort(&stack_a, &stack_b);
	// else
	// 	regilar_sort(stack_a, stack_b);

	ft_lstiter(stack_a, print);
	ft_lstclear(&stack_a, free);
	// ft_lstclear(&stack_b, free);
	return (0);
}
