/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amufleh <amufleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 10:32:27 by amufleh           #+#    #+#             */
/*   Updated: 2025/12/22 19:00:28 by amufleh          ###   ########.fr       */
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

int	get_index(t_list *list, int value)
{
	int	index;

	index = 0;
	while (list)
	{
		if (list->content < value)
			index++;
		list = list->next;
	}
	return (index);
}

void	assign_indices(t_list *list)
{
	t_list	*tmp;

	tmp = list;
	while (tmp)
	{
		tmp->index = get_index(list, tmp->content);
		tmp = tmp->next;
	}
}

int	find_min(t_list *list)
{
	int	min;
	int	index;
	int	i;

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
