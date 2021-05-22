#include "pushSwap.h"
#include <stdio.h>

void	ft_put_dcllistcontents(t_dcllist *lst)
{
	//三色用意して，色変えるのは簡単に出来そう
	if (lst->contents == NULL)
	{
		printf("=======This is head of the list=======\n");
		printf("\x1b[33mlst->prev = %p\x1b[39m\n", lst->prev);
		printf("\x1b[35m     lst  = %p\x1b[39m\n", lst);
		printf("\x1b[36mlst->next = %p\x1b[39m\n", lst->next);
	}
	lst = lst->next;
	while (lst->contents != NULL)
	{
		printf("===========This is [%d] list===========\n", ((t_set *)lst->contents)->index);
		printf("\x1b[33mlst->prev = %p\x1b[39m\n", lst->prev);
		printf("\x1b[35m     lst  = %p\x1b[39m\n", lst);
		printf("\x1b[36mlst->next = %p\x1b[39m\n", lst->next);
		printf("\x1b[32mnum = %d\x1b[39m\n\n", ((t_set *)lst->contents)->num);
		lst = lst->next;
	}
	return ;
}


