/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amufleh <amufleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 11:22:28 by amufleh           #+#    #+#             */
/*   Updated: 2025/12/08 16:48:51 by amufleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(const char *nptr)
{
	int	i;
	int	si;
	long	num;

	i = 0;
	si = 1;
	num = 0;
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

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
int	is_unique(t_list list, int num)
{
	while (list.next)
	{
		if ((int *)list.content == num)
			return (0);
		list = list ->next;
	}
	return (1);
}
int	push(t_list &list, int num)
{
	t_list	node;

	node = ft_lstnew(num);
	if (!node)
		return (0);
	ft_lstadd_back (list, node);
}
int main(int args, char *argv[])
{
	t_list	*list;
	int	i;
	int	temp;
	i = 0;
	while (args != 0)
	{
		if (is_number(argv[i]) ||( argv[i][0] == '0' && ft_strlen(argv[i]) == 1))
		{
			printf("%d ",is_number(argv[i]));
			temp = is_number(argv[i]);
		}
		else
			continue;
		if (is_unique(list, temp))
			push (*list, temp);
		else
			return (0);
		i++;
		args--;
	}
}
