/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:07:20 by kyoshida          #+#    #+#             */
/*   Updated: 2023/07/25 20:23:02 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push(t_list **stack_1, t_list **stack_2)
{
	t_list	*tmp;
	t_list *head;

	tmp = *stack_2;
	head = (*stack_2)->next;
	tmp->next = *stack_1;
	*stack_2 = head;
	*stack_1 = tmp;
	return (0);
}

int	pa_command(t_list **stack_a, t_list **stack_b)
{
	if (ft_push(stack_a, stack_b) == 1)
		return (1);
	ft_printf("pa\n");
	return (0);
}

int	pb_command(t_list **stack_b, t_list **stack_a)
{
	if (ft_push(stack_b, stack_a) == 1)
		return (1);
	ft_printf("pb\n");
	return (0);
}
