/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amufleh <amufleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 12:23:03 by amufleh           #+#    #+#             */
/*   Updated: 2025/12/22 18:51:14 by amufleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_list
{
	int	content;
	int	index;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
int		ft_strlen(char *str);
int		push(t_list **list, int num);
int		custom_atoi(const char *nptr);
int		is_unique(t_list *list, int num);
int		is_zero(char *str);
int		input_validation(t_list **list, int argc, char *argv[]);
int		get_index(t_list *list, int value);
int		find_min(t_list *list);
int		count_max_bit(t_list *stack_a);
int		is_sorted(t_list *list);
void	assign_indices(t_list *list);
void	ft_putnbr(int n);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(int));
void	swap_a(t_list *stack_a);
void	reverse_rotate_a(t_list **stack_a);
void	rotate_a(t_list **stack_a);
void	push_a(t_list **stack_a, t_list **stack_b);
void	push_b(t_list **stack_a, t_list **stack_b);
void	mini_sort(t_list **stack_a, t_list **stack_b);
void	sort_three(t_list **stack_a);
void	sort_four(t_list **stack_a, t_list **stack_b);
void	sort_five(t_list **stack_a, t_list **stack_b);
void	handel_index_one(t_list **stack_a, t_list **stack_b, int flage);
void	handel_index_tow(t_list **stack_a, t_list **stack_b, int flage);
void	handel_index_three(t_list **stack_a, t_list **stack_b, int flage);
void	return_all_to_a(t_list **stack_a, t_list **stack_b);
void	radix_sort(t_list **stack_a, t_list **stack_b);
void	print_error();
void	ft_putnbr_nospace(int n);
void	ft_putstr_fd(char *s, int fd);
#endif
