/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 11:36:25 by yoshidakazu       #+#    #+#             */
/*   Updated: 2023/07/29 11:41:07 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int issort(t_list **stack_a)
{
    int i;
    t_list *tmp;

    tmp = *stack_a;
    i = 1;
    while(tmp!=NULL)
    {
        if(i!=tmp->pressnum)
            return 0;
        i++;
        tmp = tmp->next;
    }
    return 1;
}