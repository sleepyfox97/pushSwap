#include "pushSwap.h"

void	ft_dcllist_clear(t_dcllist **lst)
{
	t_dcllist *tmp;

	if (lst == NULL)
		return ;
	*lst = (*lst)->next; 
	while ((*lst)->contents != NULL)
	{
		tmp = *lst;
		*lst = tmp->next;
		free(tmp->contents);
		tmp->contents = NULL;
		free(tmp);
		tmp = NULL;
	}
	return ;
}


