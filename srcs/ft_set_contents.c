#include "pushSwap.h"

t_set	*ft_set_contents(int num, int index)
{
	t_set	*new;

	new = (t_set *)malloc(sizeof(t_set));
	if (new == NULL)
		return (NULL);
	new->num = num;
	new->index = index;
	return (new);
}
