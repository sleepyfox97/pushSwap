#include "pushSwap.h"
#include <stdio.h>

t_dcllist	*ft_dcllist_takenoed(t_dcllist *lst)
{
	lst->prev->next = lst->next;
	lst->next->prev = lst->prev;
	lst->prev = lst;
	lst->next = lst;
	return (lst);
}

//swap a or swap b or swap a and b
void	ft_swap(t_dcllist *stack)
{
	t_dcllist	*first;
	t_dcllist	*second;
	// t_set		*tmp1;
	// t_set		*tmp2;
	first = stack->next;
	second = stack->next->next;
	first = ft_dcllist_takenoed(first);
	ft_dcllist_addback(&second, first);
	// first->next = second->next;
	// first->prev = second;
	// second->next->prev = first;
	// second->prev = stack;
	// second->next = first;
	// stack->next = second;
	// ((t_set *)first->contents)->index = 2;
	// ((t_set *)second->contents)->index = 1;
	return ;
}

//a,bはそれぞれのstackの先頭(番兵node)とする.命令としては"pb"になる．
void	ft_pushAtoB(t_dcllist **a, t_dcllist **b)
{
	//aを独立させる
	(*a)->next = ft_dcllist_takenoed((*a)->next);
	ft_dcllist_addback(b, (*a)->next);
	return ;
}

t_set	*ft_make_set(int num, int index)
{
	t_set	*new;

	new = (t_set *)malloc(sizeof(t_set));
	if (new == NULL)
		return (NULL);
	new->num = num;
	new->index = index;
	return (new);
}

int		main(int argc, char *argv[])
{
	t_dcllist	*stacka;
	t_dcllist	*stackb;


	stacka = ft_make_stack(argc, argv);
	stackb = ft_make_stack(argc, argv);
	while (1)
	{
		ft_put_dcllistcontents(stacka);
		stacka = stacka->next;
		if (stacka->contents == NULL)
			break ;
	}
	ft_pushAtoB(&stacka, &stackb);
	printf("\x1b[33mstackA\x1b[39m\n");
	while (1)
	{
		ft_put_dcllistcontents(stacka);
		stacka = stacka->next;
		if (stacka->contents == NULL)
			break ;
	}
	printf("\x1b[33mstackB\x1b[39m\n");
	while (1)
	{
		ft_put_dcllistcontents(stackb);
		stackb = stackb->next;
		if (stacka->contents == NULL)
			break ;
	}
	return (0);
	//check done 5/14
	// t_dcllist	*node0;
	// t_dcllist	*node1;
	// t_dcllist	*node2;
	// t_set		*tmp;

	// node0 = ft_dcllist_new(NULL);
	// tmp = ft_make_set(1, 1);
	// node1 = ft_dcllist_new(tmp);
	// tmp = ft_make_set(2, 2);
	// node2 = ft_dcllist_new(tmp);
	// ft_dcllist_addback(&node0, node1);
	// ft_dcllist_addfront(&node0, node2);
	// ft_put_dcllistcontents(node0);
	// ft_put_dcllistcontents(node1);
	// ft_put_dcllistcontents(node2);
}
