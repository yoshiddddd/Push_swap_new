/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:43:46 by yoshidakazu       #+#    #+#             */
/*   Updated: 2023/07/25 20:35:15 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_min_index(t_list **stack, int min)
{
    int count;
    t_list *tmp;
    count = 1;
    tmp = *stack;
    while(tmp->data!=min && count<ft_lstsize(&tmp))
    {
        count++;
        tmp = tmp->next;   
    }
    return count;
}
t_list	*find_min_rotate(t_list **stack, int min)
{
	t_list	*tmp;

	tmp = *stack;
        while(tmp->data>min)
            ra_command(&tmp);
	return (tmp);
}
int	find_min(t_list **stack)
{
	t_list	*tmp;
	int		min;

	tmp = *stack;
	min = INT_MAX;
	while (tmp != NULL)
	{
		if (tmp->data < min)
			min = tmp->data;
		tmp = tmp->next;
	}
	return (min);
}

int	find_press_min(t_list **stack, int size, int i)
{
	int		min;
	t_list	*tmp;

	min = INT_MAX;
	tmp = *stack;
	while (tmp != NULL)
	{
		if (tmp->pressnum == size * i)
		{
			min = tmp->data;
			break ;
		}
		tmp = tmp->next;
	}
	return (min);
}

int	find_max(t_list **stack)
{
	t_list	*tmp;
	int		max;

	tmp = *stack;
	max = tmp->data;
	while (tmp != NULL)
	{
		if (tmp->data > max)
			max = tmp->data;
		tmp = tmp->next;
	}
	return (max);
}
