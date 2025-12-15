/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_myalgo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amufleh <amufleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:26:58 by amufleh           #+#    #+#             */
/*   Updated: 2025/12/15 15:06:30 by amufleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_max(t_list *list, int num)
{
	int max;

	max = INT_MIN;
	while (list)
	{
		if (list->content >= num)
			max = list->content;
		list = list->next;
	}
	return (max);
}

t_list *sort_insert(t_list *curr, t_list *sorted)
{
	t_list *temp;

	if (!sorted || curr->content < sorted->content)
	{
		curr->next = sorted;
		return (curr);
	}
	temp = sorted;
	while (temp->next
		&& temp->next->content < curr->content)
		temp = temp->next;
	curr->next = temp->next;
	temp->next = curr;
	return (sorted);
}

t_list *insertion_sort(t_list *list)
{
	t_list *sorted;
	t_list *curr;
	t_list *next;

	sorted = NULL;
	curr = list;
	while (curr)
	{
		next = curr->next;
		curr->next = NULL;
		sorted = sort_insert(curr, sorted);
		curr = next;
	}
	return (sorted);
}

// void sort_array(t_list *list)
// {
// 	t_list *sorted;

// 	sorted = list;
// 	sorted = insertion_sort(list);
// }
