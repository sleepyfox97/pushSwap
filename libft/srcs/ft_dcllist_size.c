#include "../libft.h"

int	ft_dcllist_size(t_dcllist *dcllst)
{
	int			i;
	t_dcllist	*tmp;

	if (dcllst == NULL)
		return (0);
	i = 1;
	tmp = dcllst;
	while (dcllst->next != tmp)
	{
		dcllst = dcllst->next;
		i++;
	}
	return (i);
}
