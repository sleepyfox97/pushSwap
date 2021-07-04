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


void	ft_put_stack_el(t_dcllist *lsta, t_dcllist *lstb)
{
	if (lsta->contents == NULL)
		printf("\nA[ ");
	lsta = lsta->next;
	while (lsta->contents != NULL)
	{
		printf("\x1b[32m%d\x1b[39m ", ((t_set *)lsta->contents)->num);
		lsta = lsta->next;
	}
	printf("]\n");
	if (lstb->contents == NULL)
		printf("B[ ");
	lstb = lstb->next;
	while (lstb->contents != NULL)
	{
		printf("\x1b[32m%d\x1b[39m ", ((t_set *)lstb->contents)->num);
		lstb = lstb->next;
	}
	printf("]\n");
	return ;
}
