/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_fun1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amufleh <amufleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 12:26:00 by amufleh           #+#    #+#             */
/*   Updated: 2025/12/22 16:46:26 by amufleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;

	if (!lst)
		return (NULL);
	i = ft_lstsize(lst) - 1;
	while (i--)
		lst = lst ->next;
	return (lst);
}

void	ft_lstiter(t_list *lst, void (*f)(int))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
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
