/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amufleh <amufleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 12:23:03 by amufleh           #+#    #+#             */
/*   Updated: 2025/12/15 14:27:43 by amufleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648


typedef struct s_list
{
	int	content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
t_list *insertion_sort(t_list *list);
t_list *sort_insert(t_list *curr, t_list *sorted);
int		ft_lstsize(t_list *lst);
int	ft_strlen(char *str);
int	push(t_list **list, int num);
int	custom_atoi(const char *nptr);
int	is_unique(t_list *list, int num);
int	is_zero(char *str);
int	input_validation(t_list **list, int argc, char *argv[]);
void	print(int num);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(int));


#endif
