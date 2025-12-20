/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amufleh <amufleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 10:32:27 by amufleh           #+#    #+#             */
/*   Updated: 2025/12/17 12:19:01 by amufleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

void	print(int num)
{
	printf("%d ", num);
}

void	print_error()
{
	write(2, "Error\n", 7);
}
int get_max(t_list *list)
{
	int max;

	max = INT_MIN;
	while (list)
	{
		if (list->content >= max)
			max = list->content;
		list = list->next;
	}
	return (max);
}

int	find_min(t_list *list)
{
	int min;
	int index;
	int i;

	if (!list)
		return (-1);

	min = INT_MAX;
	index = 0;
	i = 1;
	while (list)
	{
		if (list->content <= min)
		{
			min = list->content;
			index = i;
		}
		list = list->next;
		i++;
	}
	return (index);
}

