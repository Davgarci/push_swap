/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarci <davgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:47:28 by davgarci          #+#    #+#             */
/*   Updated: 2022/12/31 16:42:35 by davgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_H
# define PS_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	int				nbr;
	struct s_list	*next;

}	t_list;

long	ft_atoi_long(const char *str);
int		ft_isdigit(int c);

int		error_data_after_num(char c);
int		error_content(char k, char j);
int		error_max_int(long dest, int sign, int i);
int		parsing(int argc, char **argv);
int		doubles(t_list *head_a);

void	create(int argc, t_list *head_s1, char **argv);
void	add_nodes(t_list *head, int data);
int		ft_lstsize(t_list *lst);
void	swap_a(t_list **head_a);
void	swap_b(t_list **head_b);
void	swap_ss(t_list **head_a, t_list **head_b);
void	rotate_a(t_list **head_a);
void	rotate_b(t_list **head_b);
void	rotate_rr(t_list **head_a, t_list **head_b);
void	rev_rotate_a(t_list **head_a);
void	rev_rotate_b(t_list **head_b);
void	rev_rotate_rrr(t_list **head_a, t_list **head_b);
void	push_a(t_list **head_a, t_list **head_b);
void	push_b(t_list **head_a, t_list **head_b);

int		algorithm1(t_list *head_a, t_list *head_b);

int		order_validation(t_list *head);
int		find_min(t_list *head);
int		find_max(t_list *head);
int		find_num(t_list *head, int num);

void	ft_printlst(t_list *lst);
#endif