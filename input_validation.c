/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amufleh <amufleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 11:22:28 by amufleh           #+#    #+#             */
/*   Updated: 2025/12/15 15:45:10 by amufleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	custom_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	num;

	i = 0;
	sign = 1;
	num = 0;
	if (!nptr || !nptr[0])
		return (0);
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i])
	{
		if (nptr[i] < '0' || nptr[i] > '9')
			return (0);
		num = num * 10 + (nptr[i] - '0');
		if ((num * sign > INT_MAX) || (num * sign < INT_MIN))
			return (0);
		i++;
	}
	return (num * sign);
}

int	is_unique(t_list *list, int num)
{
	while (list)
	{
		if (list->content == num)
			return (0);
		list = list->next;
	}
	return (1);
}

int	is_zero(char *str)
{
	if (!str)
		return (0);
	if (ft_strlen(str) == 1 && str[0] == '0')
		return (1);
	return (0);
}

int	input_validation(t_list **list, int argc, char *argv[])
{
	int	i;
	int	value;

	if (argc < 2)
		return (0);
	i = 1;
	while (i < argc)
	{
		value = custom_atoi(argv[i]);
		if (!value)
		{
			if (!is_zero(argv[i]))
				return (0);
		}
		if (!is_unique(*list, value))
			return (0);
		if (!push(list, value))
			return (0);
		i++;
	}
	return (1);
}

t_list *deep_copy(t_list *list_to_copy)
{
	t_list *temp;
	t_list *node;
	t_list *list;

	list = NULL;
	node = NULL;
	temp = list_to_copy;
	while (temp)
	{
		node = ft_lstnew(temp -> content);
		ft_lstadd_back(&list, node);
		free(node);
		temp = temp -> next;
	}
	return (list);
}
int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*sorted_list;

	stack_a = NULL;
	input_validation(&stack_a, argc, argv);
	sorted_list = deep_copy(stack_a);
	insertion_sort(sorted_list);
	ft_lstiter(sorted_list, print);
	ft_lstiter(stack_a, print);
	ft_lstclear(&stack_a, free);
	//ft_lstclear(&sorted_list, free);
	return (0);
}
