#include "push_swap.h"

void  rra(t_list **stack_A)
{
    t_list *head;
    t_list *new_head;
    int tmp;
    if(!*stack_A)
        return;

    head = (*stack_A);
    new_head = (*stack_A)->next;
    tmp = new_head->content;
    new_head->content = head->content;
    head->content = tmp;
    write(1,"rra\n",4);
}
void  rrb(t_list **stack_A)
{
    t_list *head;
    t_list *new_head;
    int tmp;
    if(!*stack_A)
        return;

    head = (*stack_A);
    new_head = (*stack_A)->next;
    tmp = new_head->content;
    new_head->content = head->content;
    head->content = tmp;
    write(1,"rrb\n",4);
}