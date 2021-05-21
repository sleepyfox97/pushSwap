#include "pushSwap.h"

t_dcllist	*ft_make_stack(int argc, char *argv[])
{
	t_dcllist	*node0;
	t_dcllist	*node;
	t_set		*tmp;
	int			i;

	node0 = ft_dcllist_new(NULL);
	if (node0 == NULL)
		return (NULL);
	i = 1;
	while (i < argc)
	{
		//check argvを用意する．
		tmp = ft_make_set(ft_atoi(argv[i]), i);
		node = ft_dcllist_new(tmp);
		if (node == NULL)
		{
			//freeする．
			return (NULL);
		}
		ft_dcllist_addfront(&node0, node);
		i++;
	}
	return (node0);
}
