/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_last.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:07:55 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/08 11:34:33 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;
	// puts("lst_last");
	if (!lst)
		return (lst);
	tmp = lst;
	while (tmp->next)
	{
		tmp = tmp->next;
		if(tmp->next == lst)
			break;
	}
	return (tmp);
}