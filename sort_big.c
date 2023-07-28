/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:32:00 by kyoshida          #+#    #+#             */
/*   Updated: 2023/07/25 21:45:03 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_middle(t_list **stack, int size, int i)
{
	int		middle;
	t_list	*tmp;

	tmp = *stack;
	middle = 0;
	while (tmp != NULL)
	{
		if (tmp->pressnum - 1 == (size / 2) * (2*i - 1))
			middle = tmp->data;
		tmp = tmp->next;
	}
	return (middle);
}

static int get_max_index(t_list **stack_b,int size)
{
    int count;
    t_list *tmp;

    tmp = *stack_b;
    count = 1;
    while(size != tmp->pressnum)
    {
        tmp = tmp->next;
        count++;
    }
    return count;
}

int push_b_to_a(t_list **stack_a , t_list **stack_b)
{
    // int first_max;
    // int second_max;
    int len;
    while(*stack_b!=NULL)
    {
    len = ft_lstsize(stack_b);
	// printf("len:%d\n",(*stack_b)->pressnum );
		
		if(len == (*stack_b)->pressnum )
		{
            pa_command(stack_a,stack_b);
			// if((*stack_a)->next!=NULL &&((*stack_a)->data > (*stack_a)->next->data))
			// 	sa_command(stack_a);
		}
        else if(get_max_index(stack_b,len) > len / 2)
            rrb_command(stack_b);
        else
            rb_command(stack_b);
    }
    return 0;
}

int	big_sort(t_list **stack_a, t_list **stack_b, int size)
{
	int		min;
	int		count;
	int		mid;
	int		i;
	i = 1;
	while (*stack_a != NULL)
	{
		count = 0;
		mid = get_middle(stack_a, size, i);
		min = find_press_min(stack_a, size, i);
		while (count < size && *stack_a != NULL)
		{
		*stack_a = find_min_rotate(stack_a, min);
			pb_command(stack_b, stack_a);
			if((*stack_b)->data < mid)
				rb_command(stack_b);
			count++;
		}
		
		i++;
	}
    push_b_to_a(stack_a,stack_b);
	return (0);
}
