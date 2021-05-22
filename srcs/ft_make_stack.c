#include "pushSwap.h"

//コマンドライン引数を用いて番兵ノードを持った
//現状番兵もmallocしているが，しない方がいいかもしれない．(freeするときのこととかを考えると)
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
		tmp = ft_make_set(ft_atoi(argv[i]), i);
		node = ft_dcllist_new(tmp);
		if (node == NULL)
		{
			//失敗した場合にfreeする．
			return (NULL);
		}
		ft_dcllist_addfront(&node0, node);
		i++;
	}
	return (node0);
}
