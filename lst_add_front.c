
#include "push_swap.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	if	(!(*lst))
	{
		*lst = new;
		new->next = new;
		new->prev = new;
	}
	else
	{
		
		new->next = (*lst);
		new->prev = ft_lstlast(*lst);
		(*lst)->prev = new;
		ft_lstlast(*lst)->next = new;
		(*lst) = new;
	}
}
