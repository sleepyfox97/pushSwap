#include "pushSwap.h"
#include <stdio.h>

void	ft_put_dcllistcontents(t_dcllist *lst)
{
	//三色用意して，色変えるのは簡単に出来そう
	if (lst->contents == NULL)
	{
		printf("=======This is head of the list=======\n");
		printf("lst->prev = %p\n", lst->prev);
		printf("     lst  = %p\n", lst);
		printf("lst->next = %p\n", lst->next);
		return ;
	}
	else
	{
		printf("===========This is [%d] list===========\n", ((t_set *)lst->contents)->index);
		printf("lst->prev = %p\n", lst->prev);
		printf("     lst  = %p\n", lst);
		printf("lst->next = %p\n", lst->next);
		printf("\x1b[32mnum = %d\x1b[39m\n\n", ((t_set *)lst->contents)->num);
	}
	return ;
}
