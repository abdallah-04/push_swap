/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amufleh <amufleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 11:22:28 by amufleh           #+#    #+#             */
/*   Updated: 2025/12/17 13:53:33 by amufleh          ###   ########.fr       */
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
