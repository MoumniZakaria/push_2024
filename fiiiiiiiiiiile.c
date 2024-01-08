#include "push_swap.h"

void  push(t_list **dst, t_list **src)
{
    t_list *head_src;
    t_list *head_dst;
    t_list *new_src_head;
    t_list *new_dst_head;
    if(!(*src))
        return ;
    head_src = *src;
    new_src_head = head_src->next;
    new_src_head->prev = new_src_head->prev->prev;
    (new_src_head->prev)->next = new_src_head;
    *src = new_src_head;

    head_src->next = NULL;
    head_src->prev = NULL;
    head_dst = (*dst);

    new_dst_head = head_src;
    if(ft_lstsize(*dst) == 0)
    {
        new_dst_head->next = new_dst_head;
        new_dst_head->prev = new_dst_head;
        (*dst) = new_dst_head ;
        return ;
    }
    else
    {
        new_dst_head->next = head_dst;
        head_dst->prev = new_dst_head;
        new_dst_head->prev = ft_lstlast(head_dst);
        ft_lstlast(head_dst)->next = new_dst_head->next;
        (*dst) = new_dst_head ;
    }
}
	// printf("this is :\t%d\n\n",(*dst)->next->content);

    // if (ft_lstsize(*src) == 0)
    // {
    //     free(*src);
    //     *src = NULL;
    // }