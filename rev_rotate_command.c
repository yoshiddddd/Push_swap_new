/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_command.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:28:36 by yoshidakazu       #+#    #+#             */
/*   Updated: 2023/07/25 20:22:05 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rev_rotate(t_list **stack)
{
	t_list	*now;
	t_list	*flast;
	t_list	*last;

	now = *stack;
	flast = ft_lstfrontlast(*stack);
	last = flast->next;
	last->next = now;
    *stack = last;
	flast->next = NULL;
	return (0);
}

int	rra_command(t_list **stack_a)
{
	if (ft_rev_rotate(stack_a) == 1)
		return (1);
	ft_printf("rra\n");
	return (0);
}

int	rrb_command(t_list **stack_b)
{
	if (ft_rev_rotate(stack_b) == 1)
		return (1);
	ft_printf("rrb\n");
	return (0);
}

int	rrr_command(t_list **stack_a, t_list **stack_b)
{
	if (ft_rev_rotate(stack_a) == 1 || ft_rev_rotate(stack_b) == 1)
		return (1);
	ft_printf("rrr\n");
	return (0);
}
