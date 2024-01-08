

#include "push_swap.h"

void  ra(t_list **stack_A)
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
}
void  rb(t_list **stack_A)
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
}