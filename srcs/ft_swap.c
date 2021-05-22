#include "pushSwap.h"

//swap a or swap b or swap a and b
void	ft_swap(t_dcllist *stack)
{
	t_dcllist	*first;
	t_dcllist	*second;

	first = stack->next;
	second = stack->next->next;
	first = ft_dcllist_takenoed(first);
	ft_dcllist_addback(&second, first);
	return ;
}
