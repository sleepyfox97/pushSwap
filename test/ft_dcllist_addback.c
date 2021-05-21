#include "../libft.h"

//双方向循環リストなので，前後ろがない．
void	ft_dcllist_add(t_dcllist **lst, t_dcllist *new)
{
	if (lst == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	*lst->prev = new;
	*lst->prev->next = new;
}
