/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshidakazushi <yoshidakazushi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:50:13 by kyoshida          #+#    #+#             */
/*   Updated: 2023/07/29 11:11:17 by yoshidakazu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int  data)
{
	t_list	*tmp;

	tmp = (t_list *)malloc(sizeof(tmp));
	if (!tmp)
		return (NULL);
	tmp->data = data;
	tmp->next = NULL;
	return (tmp);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

int	ft_lstsize(t_list **lst)
{
	int	i;
	t_list *tmp;
	tmp = *lst;
	i = 0;
	while (tmp != NULL)
	{
		tmp = (tmp)->next;
		i++;
	}
	return (i);
}
