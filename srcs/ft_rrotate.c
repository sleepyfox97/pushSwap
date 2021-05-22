#include "pushSwap.h"

void	ft_rrotate(t_dcllist *stack)
{
	t_dcllist	*last;

	last = stack->prev;
	ft_dcllist_takenoed(last);
	ft_dcllist_addback(&stack, last);
	return ;
}

void	ft_both_rrotate(t_dcllist *a, t_dcllist *b)
{
	ft_rrotate(a);
	ft_rrotate(b);
	return ;
}
