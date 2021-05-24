#include "pushSwap.h"

//argc - 1が並び替えるものの数．
int main(int argv, char *argc)
{
	t_dcllist	stack_a;
	t_dcllist	stack_b;

	ft_initiate(&stack_a, &stack_b);
	ft_make_stack(argc, argv, &stack_a);
	ft_check_stack_a(&stack_a);
	//sort by the stack size and other thing
	ft_sort(&stack_a, &stack_b, argc - 1);
	ft_clear_stack(&stack_a, &stack_b);
}

void	ft_check_stack_a(&stack_a)
{
	t_set	*tmp1;
	t_set	*tmp2;

	a = a->nextl
	if (a->next->contents == NULL)
		exit (0);
	while (a->next->contents != NULL)
	{
		tmp1 = (t_set *)a->contents;
		tmp2 = (t_set *)a->next->contents;
		if (tmp1->num > tmp2->num)
			return ;
		a = a->next;
	}
	eixt (0);
}

void	ft_choose_rule_by_num(t_dcllist *a, t_dcllist *b, int rulenum)
{
	if (rulenum == _SA)
		ft_swap(a);
	else if (rulenum == _SB)
		ft_swap(b);
	else if (rulenum == _SS)
		ft_swap_ab(a, b);
	else if (rulenum == _PA)
		ft_pushAtoB(b, a);
	else if (rulenum == _PB)
		ft_pushAtoB(a, b);
	else if (rulenum == _RA)
		ft_rotate(a);
	else if (rulenum == _RB)
		ft_rotate(b);
	else if (rulenum == _RR)
		ft_both_rotate(a, b);
	else if (rulenum == _RRA)
		ft_rrotate(a);
	else if (rulenum == _RRB)
		ft_rrotate(b);
	else if (rulenum == _RRR)
		ft_both_rrotate(a, b);
}


void	ft_sort(t_dcllist *a, t_dcllist *b, int size)
{
	t_list	
	if (size < 6)
		ft_full_serch(a, b);
	else
		ft_quick_sort(a, b);
	
}