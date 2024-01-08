/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:54:50 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/08 13:22:42 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <libc.h>

typedef struct s_list
{
	int			content;
	struct s_list	*next;
	struct s_list	*prev;
}		t_list;

long	ft_atoi( char *str);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(char  *str, char c);
size_t	ft_strlcpy(char *dst,  char *src, size_t size);
int		ft_strlen(char *str);


t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(int	content);
void	ft_lstdelone(t_list *lst);
int		ft_lstsize(t_list *lst);

t_list	*ft_creat_list(char **s);
void	ft_print_list_1(t_list *head);
void	ft_print_list_2(t_list *head);


void  pb(t_list **dst, t_list **src);
void  sa(t_list **stack_A);
void  sb(t_list **stack_A);

#endif