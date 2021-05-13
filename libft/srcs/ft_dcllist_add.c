#include "../libft.h"

void	ft_dcllist_add(t_dcllist **lst, t_dcllist *new)
{
	if (lst == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	new->prev = (*lst)->prev;
	(*lst)->prev->next = new;
	(*lst)->prev = new;
	new->next = (*lst);
	return ;
}
