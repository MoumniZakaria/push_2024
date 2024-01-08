/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parssing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:54:59 by zmoumni           #+#    #+#             */
/*   Updated: 2024/01/08 13:26:51 by zmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int chack_nbr(char *s)
{
    int i;
    i = 0;
	while ((s[i] >= 9 && s[i] <= 13) || (s[i] == 32))
		i++;
	if(s[i] == '-' || s[i] == '+')
		i++;
	if(s[i] == '\0')
		return 0; 
	while (s[i])
    {
        if (!(s[i] >= '0' && s[i] <= '9'))
            return 0;
        i++;
    }
    return 1;
}
int check_empty(char *s)
{
	int i = 0;
	while ((s[i] >= 9 && s[i] <= 13) || (s[i] == 32))
		i++;
	if(s[i] == '\0')
		return 1;
	else
		return 0;
}
int chack_range(char *s)
{
    if (ft_atoi(s) >= INT_MIN && ft_atoi(s) <= INT_MAX)
    	return 1;
	return 0;
}
int check_dup(char **s)
{
	int i;
	int j;
	
	i = 0;
	while (s[i])
	{
		j = i + 1;
		while (s[j])
		{
			if (ft_atoi(s[i]) == ft_atoi(s[j]))
				return 0;
			j++;
		}
		i++;
	}
	return (1);
}
t_list	*parssing(int ac, char**av)
{
    int i;
    char *rst;
    char **arg;

    i = 1;
	rst = NULL;
	if (ac < 2)
		return (write(2, "Error: Invalid arguments !\n", 28), NULL);
    while (av[i])
    {
		if(check_empty(av[i]))
			return (write(2, "Error: Empty arguments !\n", 26),NULL);
		rst = ft_strjoin(rst,av[i]);
		rst = ft_strjoin(rst," ");
		i++;
    }
	arg = ft_split(rst, ' ');
	i = 0;
	while (arg[i])
    {
		if (!(chack_nbr(arg[i])) || (!chack_range(arg[i])) || (!check_dup(arg)))
			return (write(2, "Error: Invalid arguments !\n", 28),NULL);
		i++;
    }
    return (free(rst), write(2, "OK !\n", 5), ft_creat_list(arg));
}

void fun() {
	system("leaks push_swap");
}

int main(int ac, char **av)
{
	// atexit(fun);
	// if (ac == 1)
	// 	return (write(2, "Error: Invalid arguments !\n", 28), 1);
	t_list *stack_A  = NULL;
	t_list *stack_B = NULL;
	stack_A = parssing(ac,av);

	// parssing(ac,av);

	puts("this is a : before push");
	ft_print_list_1(stack_A);

	
	// // darori delete stack a
	// // t_list *last;
	// // tmp = stack_A;
	// // while(1)
	// // {
	// // 	tmp = stack_A->next;
	// // 	last = ft_lstlast(stack_A);
	// // 	ft_lstdelone(stack_A);
	// // 	stack_A = tmp;
	// // 	stack_A->prev = last;
	// // 	last->next = stack_A;
	// // 	if (stack_A == stack_A->next)
	// // 		break;
	// // }
	// // free(stack_A);
	


	// sa(&stack_A);
	// push(&stack_B, &stack_A);
	
	pb(&stack_B, &stack_A);
	pb(&stack_B, &stack_A);
	pb(&stack_B, &stack_A);



	// push(&stack_B, &stack_A);
	// push(&stack_B, &stack_A);
	// push(&stack_B, &stack_A);
	// push(&stack_A, &stack_B);
	// printf("\n\n%d\n\n",stack_B->prev->content);
	// printf("\n\n%d\n\n",stack_B->next->content);

	puts("this is a");
	ft_print_list_1(stack_A); 
	
	puts("this is b");
	ft_print_list_1(stack_B);

	// printf("=========>> Adress of Head A : %p\t Value of Head A : %d\n", &stack_A->content, stack_A->content);
	// push(&stack_B, &stack_A);
	// printf("=========>> Adress of Head B : %p\t Value of Head B : %d\n", &stack_B->content, stack_B->content);
	 

	// push(&stack_A, &stack_B);
	// puts("this is a");
	// ft_print_list_1(stack_A); 
	// puts("this is b");
	// ft_print_list_1(stack_B); 
	// ft_print_list_1(stack_B);
	// puts("\n--------------\n");
	// ft_print_list_1(stack_B);
	
}

// ft_lstadd_back(lst,new(1));
// ft_lstadd_back(lst,new(2));
// ft_lstadd_back(lst,new(3));
// ft_lstadd_back(lst,new(4));
// push(&stack_A, &stack_B);