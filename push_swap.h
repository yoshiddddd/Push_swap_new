/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:08:39 by kyoshida          #+#    #+#             */
/*   Updated: 2023/07/25 20:19:35 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "./ft_printf/ft_printf.h"
typedef struct s_list
{
	int				data;
	int				pressnum;
	struct s_list	*next;
}					t_list;

// ---------swap-----------
int					ft_swap(t_list **stack);
int					sa_command(t_list **stack_a);
int					sb_command(t_list **stack_b);
int					ss_command(t_list **stack_a, t_list **stack_b);

// ----------rotate-------------
int					ft_rotate(t_list **stack);
int					ra_command(t_list **stack_a);
int					rb_command(t_list **stack_b);
int					rr_command(t_list **stack_a, t_list **stack_b);

// -----------rev_rotate------------
int					ft_rev_rotate(t_list **stack);
int					rra_command(t_list **stack_a);
int					rrb_command(t_list **stack_b);
int					rrr_command(t_list **stack_a, t_list **stack_b);

// --------------push---------------
int					pb_command(t_list **stack_b, t_list **stack_a);
int					pa_command(t_list **stack_a, t_list **stack_b);

// -----------lstutils--------------
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstfrontlast(t_list *lst);
t_list				*ft_lstnew(int data);
void				ft_lstadd_back(t_list **lst, t_list *new);
int					ft_lstsize(t_list **lst);
int					lstadd_a(t_list **stack, int argc, char **argv);
void				ft_sort(t_list **stack_a, t_list **stack_b);

// ------------libft---------------
long				ft_atoi_swap(const char *str);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
char				**ft_split(char const *s, char c);
// --------------error--------------
int 				str_undigit(char *str);
int 				printerror();
int  				checklst_error(t_list **stack_a);
void 				lst_free(t_list *stack_a, t_list *stack_b);
int 				argv_free(char **argv,int argc);

// ----------------find------------
int					find_min(t_list **stack);
int					find_max(t_list **stack);
int					find_press_min(t_list **stack, int size, int i);
int 				find_min_index(t_list **stack, int min);
t_list				*find_min_rotate(t_list **stack, int min);

// -------------sort------------
void				sort_size3(t_list **stack);
void				sort_size4(t_list **stack_a, t_list **stack_b);
void				sort_size5(t_list **stack_a, t_list **stack_b);
int					big_sort(t_list **stack_a, t_list **stack_b, int size);
int					num_press(t_list **stack);
#endif