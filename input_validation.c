/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amufleh <amufleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 11:22:28 by amufleh           #+#    #+#             */
/*   Updated: 2025/12/13 17:51:28 by amufleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(char *nptr)
{
	int	i;
	int	si;
	long	num;

	i = 0;
	si = 1;
	num = 0;
	if (!nptr || !nptr[0])
		return (0);
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			si = -1;
		i++;
	}
	while (nptr[i])
	{
		if (!(nptr[i] >= '0' && nptr[i] <= '9'))
			return 0;
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	num *= si;
	if (num >= 2147483647 || num <= -2147483648)
		return (0);
	return (num);
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

int	push(t_list **list, int num)
{
	t_list	*node;

	if (!list)
		return (0);
	node = ft_lstnew(num);
	if (!node)
		return (0);
	ft_lstadd_back(list, node);
	return (1);
}

int	input_validation(t_list **list, int argc, char *argv[])
{
	int	i;
	int	value;

	i = 1;
	while (i < argc)
	{
		if (!is_number(argv[i]))
			return (0);
		value = is_number(argv[i]);
		if (!is_unique(*list, value))
			return (0);
		if (!push(list, value))
			return (0);
		i++;
	}
	return (1);
}
print(int num)
{
	printf("%d ", num);
}

int	main(int argc, char *argv[])
{
	t_list	*list;

	list = NULL;
	if (!input_validation(&list, argc, argv))
		return (1);
	ft_lstiter(list, print);
	return (0);
}
