/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_myalgo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amufleh <amufleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:26:58 by amufleh           #+#    #+#             */
/*   Updated: 2025/12/17 13:53:59 by amufleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		tmp->indx = get_index(list, tmp->content);
		tmp = tmp->next;
	}
}
