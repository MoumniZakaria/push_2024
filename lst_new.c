/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:08:17 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/08 10:34:02 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*new;

	new = malloc (sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = new;
	new->prev = new;
	return (new);
}
