#include "push_swap.h"

void  pb(t_list **Stack_B, t_list **Stack_A)
{
    t_list  *tmp;
    t_list  *last;

    if(!Stack_A || !(*Stack_A))
        return ;


    tmp = *Stack_A;
    last = ft_lstlast((*Stack_A));
    (*Stack_A) = (*Stack_A)->next;
    (*Stack_A)->prev = last;
    last->next = (*Stack_A);
    tmp->next = NULL;
    tmp->prev = NULL;
    if (!(*Stack_B))
    {
        tmp->next = tmp;
        tmp->prev = tmp;
        (*Stack_B) = tmp;
        return ;
    }
    tmp->next = (*Stack_B);
    tmp->prev = ft_lstlast(*Stack_B);
    (*Stack_B)->prev = tmp;
    ft_lstlast(*Stack_B)->next = tmp;
    (*Stack_B) = tmp;
    // if (*Stack_A == (*Stack_A)->next)
    // {
    //     (*Stack_A)->next= NULL;
    //     (*Stack_A)->prev=NULL;
    //     (*Stack_A) = NULL;
    // }
}
