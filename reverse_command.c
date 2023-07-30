/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_command.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshida <kyoshida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:51:07 by yoshidakazu       #+#    #+#             */
/*   Updated: 2023/07/30 13:07:34 by kyoshida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_rotate(t_list **stack)
{
	t_list	*now;
	t_list	*last;
	t_list	*head;

	if (ft_lstsize(stack) == 1 || *stack == NULL)
		return (1);
	now = *stack;
	head = (*stack)->next;
	last = ft_lstfrontlast(*stack);
	last->next->next = now;
	now->next = NULL;
	*stack = head;
	return (0);
}

int	ra_command(t_list **stack_a)
{
	if (ft_rotate(stack_a) == 1)
		return (1);
	ft_printf("ra\n");
	return (0);
}

int	rb_command(t_list **stack_b)
{
	if (ft_lstsize(stack_b) == 1)
		return (0);
	if (ft_rotate(stack_b) == 1)
		return (1);
	ft_printf("rb\n");
	return (0);
}

int	rr_command(t_list **stack_a, t_list **stack_b)
{
	if (ft_rotate(stack_a) == 1 || ft_rotate(stack_b) == 1)
		return (1);
	ft_printf("rr\n");
	return (0);
}
