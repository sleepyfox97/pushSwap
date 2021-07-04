#include "pushSwap.h"

//a,bはそれぞれのstackの先頭(番兵node)とする.命令としては"pb"になる．
void	ft_pushAtoB(t_dcllist *a, t_dcllist *b)
{
	t_dcllist	*first;

	if (a->next->contents == NULL)
	{
		write(2, "Error\n",  6);
		exit (0);
	}
	first = a->next;
	ft_dcllist_takenoed(first);
	ft_dcllist_addback(&b, first);//これだけだとfirstの前後がつながらない．
	return ;
}


// int main(int argc, char *argv[])
// {
// 	t_dcllist	stack_a;
// 	t_dcllist	stack_b;

// 	stack_a = ft_make_stack(argc, argv);
// 	stack_b	= ft_make_stack(argc, argv);
// }