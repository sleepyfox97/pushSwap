#include "pushSwap.h"

void	ft_initiate(t_dcllist *a, t_dcllist *b)
{
	a->contents = NULL;
	a->next = a;
	a->prev = a;
	b->contents = NULL;
	b->next = b;
	b->prev = b;
	return ;
}
