
#include "push_swap.h"

	int	ft_lstsize(t_list *lst)
{
	int		cp;
	t_list	*tmp;
	cp = 0;
	if (!lst)
		return (0);
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		if(tmp->next == lst)
			break;
		cp++;
	}
	return (cp);
}