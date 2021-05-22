#include "pushSwap.h"

//a,bはそれぞれのstackの先頭(番兵node)とする.命令としては"pb"になる．
void	ft_pushAtoB(t_dcllist **a, t_dcllist **b)
{
	(*a)->next = ft_dcllist_takenoed((*a)->next);
	ft_dcllist_addback(b, (*a)->next);
	return ;
}


// int main(int argc, char *argv[])
// {
// 	t_dcllist	stack_a;
// 	t_dcllist	stack_b;

// 	stack_a = ft_make_stack(argc, argv);
// 	stack_b	= ft_make_stack(argc, argv);
// }