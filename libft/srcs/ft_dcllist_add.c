#include "libft.h"

void	ft_dcllist_addfront(t_dcllist **lst, t_dcllist *new)
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

//番兵がいるときはダブルポインタである必要なさそう．
//newのprevのnextを書き換えてない．
void	ft_dcllist_addback(t_dcllist **lst, t_dcllist *new)
{
	if (lst == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	(*lst)->next->prev = new;
	new->next = (*lst)->next;
	new->prev = (*lst);
	(*lst)->next = new;
	return ;
}
