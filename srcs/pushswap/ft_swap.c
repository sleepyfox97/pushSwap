#include "pushSwap.h"

//swap a or swap b or swap a and b
void	ft_swap(t_dcllist *stack)
{
	t_dcllist	*first;
	t_dcllist	*second;

	first = stack->next;
	second = stack->next->next;
	ft_dcllist_takenoed(first);//firstを孤立させ，番兵とsecondをつなぐ．
	ft_dcllist_addback(&second, first);//secondの後ろにfirstを置く．
	return ;
}

void	ft_swap_ab(t_dcllist *a, t_dcllist *b)
{
	ft_swap(a);
	ft_swap(b);
	return ;
}
