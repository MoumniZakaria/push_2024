/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 11:26:56 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/05 11:05:00 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *ft_creat_list(char **s)
{
    t_list *node =NULL;
    t_list *new = NULL;
    int i;
    i = 0;
    if(s[i] == NULL)
        return (NULL);
    while (s[i])
    {
        new = ft_lstnew(ft_atoi(s[i]));
        ft_lstadd_back(&node, new);
        free(s[i]);
        i++;
    }
    free(s);
    new->next = node;
    node->prev = new;
    return (node);
}