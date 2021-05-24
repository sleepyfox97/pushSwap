#include "pushSwap.h"

//frist elements become last one
void	ft_rotate(t_dcllist *stack)
{
	t_dcllist	*first;

	first = stack->next;
	ft_dcllist_takenoed(first);
	ft_dcllist_addfront(&stack, first);
	return ;
}

void	ft_both_rotate(t_dcllist *a, t_dcllist *b)
{
	ft_rotate(a);
	ft_rotate(b);
	return ;
}
